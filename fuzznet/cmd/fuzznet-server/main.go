package main

import (
	"codegram/fuzznet"
	"encoding/gob"
	"encoding/json"
	"fmt"
	"log"
	"net"
	"os"
)

var cluster = &fuzznet.ClientCluster{}

func main() {
	data, err := os.ReadFile("/home/zyedidia/programming/lfi/build/lfi-fuzz/lfi-fuzz")
	if err != nil {
		log.Fatal(err)
	}
	fuzznet.Fuzzer = data
	fuzznet.Size = 10000000

	listener, err := net.Listen("tcp", ":8090")
	if err != nil {
		fmt.Println("Error listening:", err.Error())
		os.Exit(1)
	}
	defer listener.Close()

	fmt.Println("Server listening on port 8090")

	go func() {
		for {
			conn, err := listener.Accept()
			if err != nil {
				fmt.Println("Error accepting connection:", err.Error())
				continue
			}

			register(conn)
		}
	}()

	for {
		cluster.FuzzIteration()
	}
}

func register(conn net.Conn) {
	buf := make([]byte, 128)
	n, err := conn.Read(buf)
	if err != nil {
		log.Println("connection registration:", err.Error())
		return
	}

	var reg fuzznet.Register
	err = json.Unmarshal(buf[:n], &reg)
	if err != nil {
		log.Println("connection json decode:", err)
		conn.Close()
		return
	}

	if reg.Password != fuzznet.Password {
		log.Println("incorrect password")
		conn.Close()
		return
	}

	cluster.Append(&fuzznet.Client{
		Info: fuzznet.ClientInfo{
			Arch:      reg.Arch,
			MicroArch: reg.MicroArch,
		},
		Conn:    conn,
		Encoder: gob.NewEncoder(conn),
		Decoder: gob.NewDecoder(conn),
	})

	log.Println("new client registered:", reg.MicroArch)
}

package main

import (
	"codegram/fuzznet"
	"encoding/gob"
	"encoding/json"
	"flag"
	"fmt"
	"io"
	"log"
	"net"
	"net/http"
	"os"
)

var cluster = &fuzznet.ClientCluster{}

func main() {
	size := flag.Int("size", 10000000, "size of one chunk")
	fuzzer := flag.String("fuzzer", "/home/zyedidia/programming/lfi/build/lfi-fuzz/lfi-fuzz", "path to fuzzer binary")
	flag.Parse()

	data, err := os.ReadFile(*fuzzer)
	if err != nil {
		log.Fatal(err)
	}

	fuzznet.SetOptions(data, uint64(*size))

	listener, err := net.Listen("tcp", ":8090")
	if err != nil {
		fmt.Println("error listening:", err.Error())
		os.Exit(1)
	}
	defer listener.Close()

	fmt.Println("Server listening on port 8090")

	f, err := os.Create("failed.log")
	if err != nil {
		log.Fatal(err)
	}
	w := io.MultiWriter(os.Stdout, f)
	fuzznet.Logger = log.New(w, "fuzznet", log.LstdFlags)

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

	http.HandleFunc("/fuzznet", serveDashboard)
	go http.ListenAndServe(":8091", nil)

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

	password := os.Getenv("FUZZNETPASS")

	if reg.Password != password {
		log.Println("incorrect password")
		conn.Close()
		return
	}

	c := &fuzznet.Client{
		Info: fuzznet.ClientInfo{
			Arch:      reg.Arch,
			MicroArch: reg.MicroArch,
		},
		Conn:    conn,
		Encoder: gob.NewEncoder(conn),
		Decoder: gob.NewDecoder(conn),
	}

	o := fuzznet.GetOptions()
	resp := fuzznet.RegisterResponse{
		Fuzzer:     o.Fuzzer,
		FuzzerHash: o.FuzzerHash,
	}
	err = c.Encoder.Encode(resp)
	if err != nil {
		log.Println("registration response failed:", err)
		conn.Close()
		return
	}

	cluster.Append(c)

	log.Println("new client registered:", reg.MicroArch)
}

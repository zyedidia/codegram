// Server (server.go)
package main

import (
	"encoding/gob"
	"encoding/json"
	"fmt"
	"log"
	"math/rand"
	"net"
	"os"
	"sync"
)

const (
	size = 10000000
)

var fuzzer []byte

type Arch int

type ClientInfo struct {
	Arch      string
	MicroArch string
}

type Client struct {
	Info    ClientInfo
	Conn    net.Conn
	Encoder *gob.Encoder
	Decoder *gob.Decoder

	Hash uint64
}

type ClientGroup struct {
	Clients []*Client
	Sent    int

	MicroArches map[string]bool
}

type FuzzRequest struct {
	Seed   uint64
	Fuzzer []byte
	Size   uint64
}

type FuzzResponse struct {
	Hash uint64
}

func (cg *ClientGroup) Append(c *Client) {
	cg.Clients = append(cg.Clients, c)
	cg.MicroArches[c.Info.MicroArch] = true
}

func seed() uint64 {
	u := rand.Uint64()
	for u == 0 {
		u = rand.Uint64()
	}
	return u
}

func (cg *ClientGroup) SendChunks() {
	req := FuzzRequest{
		Seed:   seed(),
		Size:   size,
		Fuzzer: fuzzer,
	}

	var lock sync.Mutex
	var clients []*Client

	var wg sync.WaitGroup
	for _, c := range cg.Clients {
		wg.Add(1)
		go func(c *Client) {
			err := c.Encoder.Encode(req)
			if err != nil {
				log.Fatal(err)
			}
			var resp FuzzResponse
			if err := c.Decoder.Decode(&resp); err != nil {
				fmt.Fprintln(os.Stderr, "error receiving:", err)
				lock.Lock()
				delete(cg.MicroArches, c.Info.MicroArch)
				lock.Unlock()
				return
			} else {
				lock.Lock()
				clients = append(clients, c)
				lock.Unlock()
			}
			c.Hash = resp.Hash
			wg.Done()
		}(c)
	}
	wg.Wait()
	cg.Sent++
	cg.Clients = clients

	if len(clients) <= 1 {
		log.Println("client group has been reduced to", len(clients))
		return
	}

	hash := cg.Clients[0].Hash
	agree := true
	for _, c := range cg.Clients {
		if hash != c.Hash {
			agree = false
		}
	}
	if !agree {
		log.Printf("%d: NOT OK (seed=%x, size=%d, groupsize=%d)\n", cg.Sent, req.Seed, req.Size, len(cg.Clients))
		for i, c := range cg.Clients {
			log.Printf("\tclient %d: hash=%x\n", i, c.Hash)
		}
	} else {
		log.Printf("%d: OK (seed=%x, size=%d, hash=%x, groupsize=%d)\n", cg.Sent, req.Seed, req.Size, hash, len(cg.Clients))
	}
}

type ClientCluster struct {
	Groups []*ClientGroup
	lock   sync.Mutex
}

func (cc *ClientCluster) Append(c *Client) {
	cc.lock.Lock()
	defer cc.lock.Unlock()
	for _, cg := range cc.Groups {
		if !cg.MicroArches[c.Info.MicroArch] {
			cg.Append(c)
			return
		}
	}
	// Make a new group
	cg := &ClientGroup{
		MicroArches: make(map[string]bool),
	}
	cg.Append(c)
	cc.Groups = append(cc.Groups, cg)
	return
}

func (cc *ClientCluster) SendChunks() {
	cc.lock.Lock()
	var wg sync.WaitGroup
	for _, cg := range cc.Groups {
		if len(cg.Clients) > 1 {
			wg.Add(1)
			go func(cg *ClientGroup) {
				cg.SendChunks()
				wg.Done()
			}(cg)
		}
	}
	wg.Wait()
	cc.lock.Unlock()
}

var cluster = &ClientCluster{}

func main() {
	data, err := os.ReadFile("fuzzer/lfi-fuzz")
	if err != nil {
		log.Fatal(err)
	}
	fuzzer = data

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
		cluster.SendChunks()
	}
}

func register(conn net.Conn) {
	buf := make([]byte, 128)
	n, err := conn.Read(buf)
	if err != nil {
		fmt.Fprintln(os.Stderr, "error reading:", err.Error())
		return
	}

	var info ClientInfo
	err = json.Unmarshal(buf[:n], &info)
	if err != nil {
		fmt.Fprintln(os.Stderr, "connection error:", err)
		conn.Close()
		return
	}

	cluster.Append(&Client{
		Info:    info,
		Conn:    conn,
		Encoder: gob.NewEncoder(conn),
		Decoder: gob.NewDecoder(conn),
	})

	log.Println("new client registered:", info)
}

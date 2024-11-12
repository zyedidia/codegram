package fuzznet

import (
	"encoding/gob"
	"hash/fnv"
	"log"
	"math/rand"
	"net"
	"sync"
)

var Size uint64
var Fuzzer []byte

type ClientInfo struct {
	Arch      string
	MicroArch string
}

type Client struct {
	Info    ClientInfo
	Conn    net.Conn
	Encoder *gob.Encoder
	Decoder *gob.Decoder
}

type ClientGroup struct {
	// Protects Clients
	Lock    sync.Mutex
	Clients []*Client

	Sent uint64
}

func seed() uint64 {
	u := rand.Uint32()
	for u == 0 {
		u = rand.Uint32()
	}
	return uint64(u)
}

func hashbytes(b []byte) uint64 {
	h := fnv.New64a()
	h.Write(b)
	return h.Sum64()
}

type Result struct {
	FuzzResponse
	MicroArch string
}

func (cg *ClientGroup) FuzzIteration() {
	// Generate a new fuzz request.
	req := FuzzRequest{
		Id:   cg.Sent,
		Seed: seed(),
		Size: Size,
		// Fuzzer: Fuzzer,
	}
	cg.Sent++

	cg.Lock.Lock()
	clients := make([]*Client, len(cg.Clients))
	copy(clients, cg.Clients)
	cg.Lock.Unlock()

	status := make([]bool, len(clients))

	// Send fuzz requests to all clients.
	var wg sync.WaitGroup
	for i, c := range clients {
		wg.Add(1)
		go func(i int, c *Client) {
			err := c.Encoder.Encode(req)
			if err == nil {
				status[i] = true
			}
			wg.Done()
		}(i, c)
	}
	wg.Wait()

	var active []*Client
	var results []Result

	// Receive fuzz response from all clients.
	for i, c := range clients {
		wg.Add(1)
		go func(i int, c *Client) {
			if status[i] {
				var resp FuzzResponse
				err := c.Decoder.Decode(&resp)
				if err != nil {
					status[i] = false
				} else {
					results = append(results, Result{
						FuzzResponse: resp,
						MicroArch:    c.Info.MicroArch,
					})
					active = append(active, c)
				}
			}
			wg.Done()
		}(i, c)
	}
	wg.Wait()

	cg.Lock.Lock()
	if len(cg.Clients) > len(clients) {
		active = append(active, cg.Clients[len(clients):]...)
	}
	cg.Clients = active
	cg.Lock.Unlock()

	// Check fuzz response
	if len(active) < len(clients) {
		log.Println("client group has been reduced to", len(active))
		if len(active) <= 1 {
			return
		}
	}

	hash := results[0].Hash
	agree := true
	for _, r := range results {
		if hash != r.Hash {
			agree = false
		}
	}
	if !agree {
		log.Printf("%d: NOT OK (seed=%x, size=%d, groupsize=%d)\n", req.Id, req.Seed, req.Size, len(results))
		for i, c := range results {
			log.Printf("\tclient %d (%s): hash=%x\n", i, c.MicroArch, c.Hash)
		}
	} else {
		log.Printf("%d: OK (seed=%x, size=%d, hash=%x, groupsize=%d)\n", req.Id, req.Seed, req.Size, hash, len(results))
	}
}

func (cg *ClientGroup) Append(c *Client) {
	cg.Lock.Lock()
	cg.Clients = append(cg.Clients, c)
	cg.Lock.Unlock()
}

func (cg *ClientGroup) HasMicroArch(m string) bool {
	cg.Lock.Lock()
	defer cg.Lock.Unlock()
	for _, c := range cg.Clients {
		if c.Info.MicroArch == m {
			return true
		}
	}
	return false
}

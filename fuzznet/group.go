package fuzznet

import (
	"encoding/gob"
	"log"
	"math/rand"
	"net"
	"sync"
)

type ClientInfo struct {
	Arch      string
	MicroArch string
}

type Client struct {
	Info     ClientInfo
	Conn     net.Conn
	Encoder  *gob.Encoder
	Decoder  *gob.Decoder
	Inactive bool
}

type ClientGroup struct {
	Clients []*Client
}

func seed() uint64 {
	u := rand.Uint32()
	for u == 0 {
		u = rand.Uint32()
	}
	return uint64(u)
}

type Result struct {
	FuzzResponse
	MicroArch string
}

func (cg *ClientGroup) FuzzIteration(id uint64) (uint64, bool, bool) {
	// Generate a new fuzz request.
	o := GetOptions()
	req := FuzzRequest{
		Id:         id,
		Seed:       seed(),
		Size:       o.Size,
		FuzzerHash: o.FuzzerHash,
	}

	clients := cg.Clients

	// Send fuzz requests to all clients.
	var wg sync.WaitGroup
	for i, c := range clients {
		wg.Add(1)
		go func(i int, c *Client) {
			err := c.Encoder.Encode(req)
			if err != nil {
				c.Inactive = true
			}
			wg.Done()
		}(i, c)
	}
	wg.Wait()

	var active []*Client
	var results []Result

	var lock sync.Mutex

	// Receive fuzz response from all clients.
	for i, c := range clients {
		wg.Add(1)
		go func(i int, c *Client) {
			if !c.Inactive {
				var resp FuzzResponse
				err := c.Decoder.Decode(&resp)
				if err != nil {
					c.Inactive = true
				} else {
					lock.Lock()
					results = append(results, Result{
						FuzzResponse: resp,
						MicroArch:    c.Info.MicroArch,
					})
					active = append(active, c)
					lock.Unlock()
				}
			}
			wg.Done()
		}(i, c)
	}
	wg.Wait()

	// Check fuzz response
	if len(active) < len(clients) {
		log.Println("client group has been reduced to", len(active))
		if len(active) <= 1 {
			return 0, true, true
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
		Logger.Printf("%d: NOT OK (seed=%x, size=%d, fuzzer=%x, groupsize=%d)\n", req.Id, req.Seed, req.Size, req.FuzzerHash, len(results))
		for _, c := range results {
			Logger.Printf("\t%s: hash=%x\n", c.MicroArch, c.Hash)
		}
	} else {
		log.Printf("%d: OK (seed=%x, size=%d, hash=%x, groupsize=%d)\n", req.Id, req.Seed, req.Size, hash, len(results))
	}

	return req.Size * uint64(len(active)), agree, false
}

func (cg *ClientGroup) Append(c *Client) {
	cg.Clients = append(cg.Clients, c)
}

func (cg *ClientGroup) HasMicroArch(m string) bool {
	for _, c := range cg.Clients {
		if c.Info.MicroArch == m {
			return true
		}
	}
	return false
}

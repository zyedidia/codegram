// Client (client.go)
package main

import (
	"bytes"
	"encoding/gob"
	"encoding/json"
	"flag"
	"fmt"
	"hash/fnv"
	"log"
	"net"
	"os"
	"os/exec"
	"runtime"
	"sync"

	"github.com/klauspost/cpuid/v2"
)

type ConnMessage struct {
	Arch      string
	MicroArch string
}

type FuzzRequest struct {
	Seed   uint64
	Fuzzer []byte
	Size   uint64
}

type FuzzResponse struct {
	Hash uint64
}

func runcmd(cmd string, args ...string) uint64 {
	out := &bytes.Buffer{}
	c := exec.Command(cmd, args...)
	c.Stdin = os.Stdin
	c.Stdout = out
	c.Stderr = out

	log.Println("running:", c)

	err := c.Run()
	if err != nil {
		log.Println("command returned error:", err)
	}

	fmt.Print(out.String())

	h := fnv.New64a()
	h.Write(out.Bytes())
	return h.Sum64()
}

func run(conn net.Conn, cpu int, brand string, wg *sync.WaitGroup) {
	msg, err := json.Marshal(&ConnMessage{
		Arch:      runtime.GOARCH,
		MicroArch: brand,
	})
	if err != nil {
		panic(err)
	}

	defer wg.Done()
	defer conn.Close()

	_, err = conn.Write(msg)
	if err != nil {
		fmt.Println("Error writing:", err.Error())
		os.Exit(1)
	}

	log.Printf("%s: registered CPU %d\n", brand, cpu)

	encoder := gob.NewEncoder(conn)
	decoder := gob.NewDecoder(conn)

	file, err := os.CreateTemp("", "lfi-fuzz")
	if err != nil {
		log.Println("error creating lfi-fuzz:", err)
		return
	}
	fuzzer := file.Name()
	file.Close()

	n := 0

	for {
		var req FuzzRequest
		if err := decoder.Decode(&req); err != nil {
			log.Println("fuzz request error:", err)
			break
		}

		log.Printf("%d: fuzz request (seed=%x, size=%x)\n", n, req.Seed, req.Size)

		err := os.WriteFile(fuzzer, req.Fuzzer, os.ModePerm)
		if err != nil {
			log.Println("could not write lfi-fuzz:", err)
			break
		}
		os.Chmod(fuzzer, os.ModePerm)

		hash := runcmd("taskset", "-c", fmt.Sprintf("%d", cpu), fuzzer, "-s", fmt.Sprintf("%x", req.Seed), "-n", fmt.Sprintf("%d", req.Size), "-r")

		resp := FuzzResponse{
			Hash: hash,
		}
		if err := encoder.Encode(resp); err != nil {
			log.Println("fuzz response error:", err)
			break
		}
		n++
	}
}

func main() {
	cpu := flag.Int("cpu", 0, "CPU core to use for fuzzing")
	cores := flag.Int("cores", 1, "number of CPU cores to use")
	id := flag.Int("id", 0, "identifier for spawning multiple independent fuzzers on the same machine")
	flag.Parse()

	brand := cpuid.CPU.BrandName

	if !cpuid.CPU.Supports(cpuid.SSE, cpuid.SSE2, cpuid.SSE3, cpuid.SSE4, cpuid.SSE42) {
		log.Fatal(brand, "does not support SSE1-4.2")
	}

	var wg sync.WaitGroup
	for i := 0; i < *cores; i++ {
		// Connect to the server
		conn, err := net.Dial("tcp", "localhost:8090")
		if err != nil {
			fmt.Println("Error connecting:", err.Error())
			os.Exit(1)
		}
		wg.Add(1)
		go run(conn, *cpu+i, fmt.Sprintf("%s (%d)", brand, *id), &wg)
	}
	wg.Wait()
}

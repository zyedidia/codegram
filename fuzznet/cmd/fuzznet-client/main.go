// Client (client.go)
package main

import (
	"bytes"
	"codegram/fuzznet"
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
	"sync/atomic"
	"time"

	"github.com/klauspost/cpuid/v2"
	"gopkg.in/natefinch/lumberjack.v2"
)

var Log *lumberjack.Logger

func runcmd(cmd string, args ...string) uint64 {
	out := &bytes.Buffer{}
	c := exec.Command(cmd, args...)
	c.Stdin = os.Stdin
	c.Stdout = out
	c.Stderr = out

	fmt.Fprintln(Log, "running:", c)

	err := c.Run()
	if err != nil {
		log.Println("command returned error:", err)
	}

	fmt.Fprint(Log, out.String())

	h := fnv.New64a()
	h.Write(out.Bytes())
	return h.Sum64()
}

// Protects fuzzer file creation
var lock sync.Mutex

var n uint64

func run(conn net.Conn, cpu int, brand, runner string) {
	msg, err := json.Marshal(&fuzznet.Register{
		Arch:      runtime.GOARCH,
		MicroArch: brand,
		Password:  os.Getenv("FUZZNETPASS"),
	})
	if err != nil {
		panic(err)
	}

	defer conn.Close()

	_, err = conn.Write(msg)
	if err != nil {
		log.Fatal("Error writing:", err.Error())
	}

	encoder := gob.NewEncoder(conn)
	decoder := gob.NewDecoder(conn)

	var regresp fuzznet.RegisterResponse
	if err := decoder.Decode(&regresp); err != nil {
		log.Fatal("registration error:", err)
	}

	lock.Lock()
	fuzzer := fmt.Sprintf("./fuzzers/lfi-fuzz-%x", regresp.FuzzerHash)
	if _, err := os.Stat(fuzzer); err != nil {
		f, err := os.Create(fuzzer)
		if err != nil {
			log.Fatal("error creating fuzzer:", err)
		}
		f.Chmod(os.ModePerm)
		_, err = f.Write(regresp.Fuzzer)
		if err != nil {
			log.Fatal("error writing fuzzer:", err)
		}
		log.Println("downloaded new fuzzer:", fuzzer)
		f.Close()
	}
	lock.Unlock()

	log.Printf("%s: registered CPU %d\n", brand, cpu)

	for {
		var req fuzznet.FuzzRequest
		if err := decoder.Decode(&req); err != nil {
			log.Println("fuzz request error:", err)
			break
		}

		if req.FuzzerHash != regresp.FuzzerHash {
			log.Println("new fuzzer required, reconnecting...")
			break
		}

		fmt.Printf("chunks: %d\r", atomic.LoadUint64(&n))

		fmt.Fprintf(Log, "%d: fuzz request (seed=%x, size=%d)\n", req.Id, req.Seed, req.Size)

		run := fuzzer
		if runner != "" {
			run = fmt.Sprintf("%s %s", runner, fuzzer)
		}

		hash := runcmd("taskset", "-c", fmt.Sprintf("%d", cpu), run, "-s", fmt.Sprintf("%x", req.Seed), "-n", fmt.Sprintf("%d", req.Size), "-r")

		resp := fuzznet.FuzzResponse{
			Id:   req.Id,
			Hash: hash,
		}
		if err := encoder.Encode(resp); err != nil {
			log.Println("fuzz response error:", err)
			break
		}
		atomic.AddUint64(&n, 1)
	}
}

func main() {
	cpu := flag.Int("cpu", 0, "CPU core to use for fuzzing")
	cores := flag.Int("cores", 1, "number of CPU cores to use")
	id := flag.Int("id", 0, "identifier for spawning multiple independent fuzzers on the same machine")
	runner := flag.String("runner", "", "tool for running fuzzer (such as QEMU)")
	flag.Parse()

	os.MkdirAll("fuzzers", os.ModePerm)
	os.MkdirAll("logs", os.ModePerm)

	Log = &lumberjack.Logger{
		Filename:   fmt.Sprintf("logs/fuzznet-%s%d.log", *runner, *id),
		MaxSize:    50,
		MaxBackups: 3,
		MaxAge:     28,
		Compress:   true,
	}

	brand := cpuid.CPU.BrandName

	if !cpuid.CPU.Supports(cpuid.SSE, cpuid.SSE2, cpuid.SSE3, cpuid.SSE4, cpuid.SSE42) {
		log.Fatal(brand, "does not support SSE1-4.2")
	}
	if !cpuid.CPU.Supports(cpuid.BMI2) {
		log.Fatal(brand, "does not support BMI2")
	}

	runexe, err := exec.LookPath(*runner)
	if *runner != "" && err != nil {
		log.Fatal("could not find", *runner)
	}

	if *id != 0 {
		brand = fmt.Sprintf("%s (%d)", brand, *id)
	}

	log.Println("waiting for connection...")

	var wg sync.WaitGroup
	for i := 0; i < *cores; i++ {
		wg.Add(1)
		go func(i int) {
			for {
				conn, err := net.Dial("tcp", "zby.scs.stanford.edu:8090")
				if err != nil {
					fmt.Fprintln(Log, "error connecting:", err.Error())
					fmt.Fprintln(Log, "trying again in 5 seconds...")
					time.Sleep(5 * time.Second)
					continue
				}
				run(conn, *cpu+i, brand, runexe)
			}
		}(i)
	}
	wg.Wait()
}

package fuzznet

import (
	"hash/fnv"
	"sync"
)

type Options struct {
	Fuzzer     []byte
	FuzzerHash uint64
	Size       uint64
}

var optLock sync.Mutex
var opts Options

func hashbytes(b []byte) uint64 {
	h := fnv.New64a()
	h.Write(b)
	return h.Sum64()
}

func SetOptions(fuzzer []byte, size uint64) {
	optLock.Lock()
	opts = Options{
		Fuzzer:     fuzzer,
		FuzzerHash: hashbytes(fuzzer),
		Size:       size,
	}
	optLock.Unlock()
}

func GetOptions() Options {
	optLock.Lock()
	o := opts
	optLock.Unlock()
	return o
}

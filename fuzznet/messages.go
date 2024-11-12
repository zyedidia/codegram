package fuzznet

const Password = "0275412496"

type Register struct {
	Arch      string
	MicroArch string
	Password  string
}

type FuzzRequest struct {
	Id     uint64
	Seed   uint64
	Size   uint64
	Fuzzer []byte
}

type FuzzResponse struct {
	Id   uint64
	Hash uint64
}

type FuzzerContent struct {
	Fuzzer     []byte
	FuzzerHash uint64
}

type FuzzerRequest struct {
	FuzzerHash uint64
}

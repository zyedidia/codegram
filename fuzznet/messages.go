package fuzznet

type Register struct {
	Arch      string
	MicroArch string
	Password  string
}

type RegisterResponse struct {
	Fuzzer     []byte
	FuzzerHash uint64
}

type FuzzRequest struct {
	Id         uint64
	Seed       uint64
	Size       uint64
	FuzzerHash uint64
}

type FuzzResponse struct {
	Id   uint64
	Hash uint64
}

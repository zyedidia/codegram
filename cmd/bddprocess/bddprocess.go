package main

import (
	"flag"
	"fmt"
	"log"
	"math/big"
	"os"
	"strconv"
	"strings"

	"github.com/dominikbraun/graph"
)

type Node struct {
	id uint16
	v  uint8
	lo uint16
	hi uint16
}

func toInt(s string) int {
	i, err := strconv.Atoi(s)
	if err != nil {
		log.Fatal(err)
	}
	return i
}

func parseHeader(line string) (int, int) {
	sNodes, sVars, _ := strings.Cut(line, " ")
	return toInt(sNodes), toInt(sVars)
}

func main() {
	flag.Parse()
	args := flag.Args()

	if len(args) <= 0 {
		fmt.Fprintf(os.Stderr, "usage: bdd lfi.bdd\n")
		os.Exit(1)
	}
	fdat, err := os.ReadFile(args[0])
	if err != nil {
		log.Fatal(err)
	}
	dat := string(fdat)
	lines := strings.Split(dat, "\n")

	n, _ := parseHeader(lines[0])

	nodes := make([]Node, 0, n)
	childMap := make(map[uint16]bool)
	nodeMap := make(map[uint16]bool)
	terminal := make(map[uint16]bool)

	for _, l := range lines[2:] {
		parts := strings.Fields(l)
		if len(parts) != 4 {
			continue
		}
		id := toInt(parts[0])
		v := toInt(parts[1])
		lo := toInt(parts[2])
		hi := toInt(parts[3])

		nodes = append(nodes, Node{
			id: uint16(id),
			v:  uint8(v),
			lo: uint16(lo),
			hi: uint16(hi),
		})
		nodeMap[uint16(id)] = true
		childMap[uint16(lo)] = true
		childMap[uint16(hi)] = true
	}

	root := -1

	for _, n := range nodes {
		if !childMap[n.id] {
			if root != -1 {
				fmt.Println("error: multiple roots found")
			}
			root = int(n.id)
		}
		if !nodeMap[n.lo] {
			terminal[n.lo] = true
		}
		if !nodeMap[n.hi] {
			terminal[n.hi] = true
		}
	}

	g := graph.New(graph.IntHash, graph.Directed(), graph.Acyclic())

	for k := range terminal {
		_ = g.AddVertex(int(k))
	}

	for _, n := range nodes {
		_ = g.AddVertex(int(n.id), graph.VertexAttribute("bit", fmt.Sprintf("%d", n.v)))
	}

	for _, n := range nodes {
		_ = g.AddEdge(int(n.id), int(n.lo))
		_ = g.AddEdge(int(n.id), int(n.hi))
	}

	totalInsts := big.NewInt(0)
	totalPaths := 0
	b2 := big.NewInt(2)
	for k := range terminal {
		if k == 0 {
			continue
		}
		paths, err := graph.AllPathsBetween(g, root, int(k))
		if err != nil {
			log.Fatal(err)
		}
		fmt.Printf("paths (root to %d): %d\n", k, len(paths))
		totalPaths += len(paths)

		bits := int(k) * 8
		for _, p := range paths {
			bsym := big.NewInt(int64(bits - len(p)))
			totalInsts.Add(totalInsts, new(big.Int).Exp(b2, bsym, nil))
		}
	}
	fmt.Println("total paths:", totalPaths)
	fmt.Println("total instructions:", totalInsts)
	ord, _ := g.Order()
	fmt.Println("total nodes:", ord)
}

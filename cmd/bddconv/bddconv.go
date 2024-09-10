package main

import (
	"flag"
	"fmt"
	"log"
	"os"
	"path/filepath"
	"strconv"

	"github.com/awalterschulze/gographviz"
)

func main() {
	dir, err := os.Getwd()
	if err != nil {
		log.Fatal(err)
	}

	flag.Parse()
	args := flag.Args()

	if len(args) <= 0 {
		log.Fatal("no input, please enter input .dot file")
	}
	data, err := os.ReadFile(filepath.Join(dir, args[0]))
	if err != nil {
		log.Fatal(err)
	}

	G, err := gographviz.Read(data)

	if err != nil {
		log.Fatal(err)
	}

	maxTerminal := 0
	for _, n := range G.Nodes.Nodes {
		if label, ok := n.Attrs["label"]; ok {
			i, err := strconv.Atoi(label[1 : len(label)-1])
			if err != nil {
				log.Fatal(err)
			}
			maxTerminal = max(maxTerminal, i)
		}
	}

	NodeIDs := make(map[string]int)

	counter := maxTerminal + 1

	numVariables := 0

	for name := range G.Nodes.Lookup {
		// fmt.Fprintln(os.Stderr, name)
		if name[1:3] == "0x" {
			if label, ok := G.Nodes.Lookup[name].Attrs["label"]; !ok {
				NodeIDs[name] = counter
				counter++
			} else {
				NodeIDs[name], _ = strconv.Atoi(label[1 : len(label)-1])
			}
		}

		_, err := strconv.Atoi(name[2 : len(name)-2])

		if err == nil {
			numVariables++
		}

	}

	fmt.Printf("%d %d\n", len(NodeIDs), numVariables)
	for i := 0; i < numVariables; i++ {
		fmt.Printf("%d ", i)
	}
	fmt.Println()

	NodeRanks := make(map[int]int)

	for _, s := range G.SubGraphs.SubGraphs {
		rank := 0
		for i := 0; i < numVariables; i++ {
			if G.Relations.ParentToChildren[s.Name][fmt.Sprintf("\" %d \"", i)] {
				rank = i
				break
			}
		}

		for name, id := range NodeIDs {
			if G.Relations.ParentToChildren[s.Name][name] {
				NodeRanks[id] = rank
			}
		}
	}

	for source, destinations := range G.Edges.SrcToDsts {
		if source[1:3] != "0x" {
			continue
		}
		fmt.Printf("%d %d ", NodeIDs[source], NodeRanks[NodeIDs[source]])
		var lo, hi string
		for destination, n := range destinations {
			if n[0].Attrs["style"] == "dashed" {
				lo = destination
			} else {
				hi = destination
			}
		}
		fmt.Printf("%d %d", NodeIDs[lo], NodeIDs[hi])
		if lo == "\"0x503aa96\"" {
			fmt.Fprintln(os.Stderr, NodeIDs[source])
		}

		fmt.Println()
	}
}

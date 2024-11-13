package main

import (
	"bytes"
	"codegram/fuzznet"
	"fmt"
	"log"
	"net/http"
	"slices"
	"sync/atomic"
	"text/template"

	_ "embed"

	"golang.org/x/exp/maps"
)

//go:embed dashboard.html
var dashboard string

func serveDashboard(w http.ResponseWriter, req *http.Request) {
	machines := make(map[string]int)
	cluster.Lock.Lock()
	for _, c := range cluster.Clients {
		if !c.Inactive {
			machines[c.Info.MicroArch]++
		}
	}
	cluster.Lock.Unlock()

	keys := maps.Keys(machines)
	slices.Sort(keys)
	avail := &bytes.Buffer{}
	info := &bytes.Buffer{}
	groupBuf := &bytes.Buffer{}

	for _, k := range keys {
		fmt.Fprintf(avail, "%d cores: %s<br>\n", machines[k], k)
	}

	groups := cluster.GetGroups()

	for i, cg := range groups {
		fmt.Fprintf(groupBuf, "Group %d<br>\n", i)
		fmt.Fprintf(groupBuf, "<ul>\n")
		for _, c := range cg.Clients {
			fmt.Fprintf(groupBuf, "<li>%s</li>\n", c.Info.MicroArch)
		}
		fmt.Fprintf(groupBuf, "</ul>\n")
	}

	o := fuzznet.GetOptions()

	fmt.Fprintf(info, "Chunk size: %d<br>\n", o.Size)
	fmt.Fprintf(info, "Active fuzzer: %x<br>\n", o.FuzzerHash)
	fmt.Fprintf(info, "Instructions executed: %d<br>\n", atomic.LoadUint64(&cluster.Instructions))
	fmt.Fprintf(info, "Non-deterministic chunks: %d/%d<br>\n", atomic.LoadUint64(&cluster.Failed), atomic.LoadUint64(&cluster.Total))

	tmpl := template.New("dashboard")
	tmpl, err := tmpl.Parse(dashboard)
	if err != nil {
		log.Fatal(err)
	}
	err = tmpl.Execute(w, map[string]any{
		"machines": avail.String(),
		"info":     info.String(),
		"groups":   groupBuf.String(),
	})
	if err != nil {
		log.Fatal(err)
	}
}

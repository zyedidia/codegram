package main

import (
	"fmt"
	"net/http"
	"slices"
	"sync/atomic"

	"golang.org/x/exp/maps"
)

func dashboard(w http.ResponseWriter, req *http.Request) {
	machines := make(map[string]int)
	cluster.Lock.Lock()
	for _, c := range cluster.Clients {
		machines[c.Info.MicroArch]++
	}
	cluster.Lock.Unlock()

	fmt.Fprintln(w, "Available machines:")
	keys := maps.Keys(machines)
	slices.Sort(keys)

	for _, k := range keys {
		fmt.Fprintf(w, "%s: %d cores\n", k, machines[k])
	}

	fmt.Fprintf(w, "Instructions executed: %d\n", atomic.LoadUint64(&cluster.Instructions))
}

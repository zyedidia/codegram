package fuzznet

import (
	"sync"
	"sync/atomic"
	"time"
)

type ClientCluster struct {
	Lock         sync.Mutex
	Clients      []*Client
	Instructions uint64
	Total        uint64
	Failed       uint64
	Changed      atomic.Bool
}

func (cc *ClientCluster) Append(c *Client) {
	cc.Lock.Lock()
	cc.Clients = append(cc.Clients, c)
	cc.Changed.Store(true)
	cc.Lock.Unlock()
}

func (cc *ClientCluster) CreateGroup(free []*Client) (*ClientGroup, []*Client) {
	var newfree []*Client
	cg := &ClientGroup{}
	used := make(map[string]bool)
	for _, c := range free {
		if c.Inactive {
			continue
		}
		if !used[c.Info.MicroArch] {
			cg.Append(c)
			used[c.Info.MicroArch] = true
		} else {
			newfree = append(newfree, c)
		}
	}
	return cg, newfree
}

func (cc *ClientCluster) GetGroups() []*ClientGroup {
	var groups []*ClientGroup

	cc.Lock.Lock()
	free := cc.Clients
	for {
		var g *ClientGroup
		g, free = cc.CreateGroup(free)
		if len(g.Clients) <= 1 {
			break
		}
		groups = append(groups, g)
	}
	cc.Lock.Unlock()

	return groups
}

func (cc *ClientCluster) FuzzIteration() {
	groups := cc.GetGroups()

	if len(groups) < 1 {
		time.Sleep(time.Second)
	}

	cc.Changed.Store(false)

	var wg sync.WaitGroup
	for _, cg := range groups {
		if len(cg.Clients) > 1 {
			wg.Add(1)
			go func(cg *ClientGroup) {
				// Continue running iterations until the cluster changes (new client joins).
				for {
					instrs, ok, disconnect := cg.FuzzIteration(atomic.LoadUint64(&cc.Total))
					atomic.AddUint64(&cc.Total, 1)
					if !ok {
						atomic.AddUint64(&cc.Failed, 1)
					}
					atomic.AddUint64(&cc.Instructions, instrs)
					if cc.Changed.Load() || disconnect {
						wg.Done()
						break
					}
				}
			}(cg)
		}
	}
	wg.Wait()
}

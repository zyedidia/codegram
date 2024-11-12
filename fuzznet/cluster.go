package fuzznet

import (
	"log"
	"sync"
)

type ClientCluster struct {
	Lock   sync.Mutex
	Groups []*ClientGroup
}

func (cc *ClientCluster) Append(c *Client) {
	cc.Lock.Lock()
	defer cc.Lock.Unlock()
	for _, cg := range cc.Groups {
		if !cg.HasMicroArch(c.Info.MicroArch) {
			cg.Append(c)
			return
		}
	}
	log.Println("creating new group for", c.Info.MicroArch)
	// Make a new group
	cg := &ClientGroup{}
	cg.Append(c)
	cc.Groups = append(cc.Groups, cg)
}

func (cc *ClientCluster) FuzzIteration() {
	cc.Lock.Lock()
	groups := make([]*ClientGroup, len(cc.Groups))
	copy(groups, cc.Groups)
	cc.Lock.Unlock()

	var wg sync.WaitGroup
	for _, cg := range groups {
		if len(cg.Clients) > 1 {
			wg.Add(1)
			go func(cg *ClientGroup) {
				cg.FuzzIteration()
				wg.Done()
			}(cg)
		}
	}
	wg.Wait()
}

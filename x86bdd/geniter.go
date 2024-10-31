package main

import (
	"flag"
	"fmt"
	"log"
	"os"
	"strings"
)

func isimm(typ string) bool {
	switch typ {
	case "int8_t", "int16_t", "int32_t", "int64_t", "uintptr_t", "const void*":
		return true
	}
	return false
}

func vector(typ string) string {
	switch typ {
	case "FeMem":
		return "mem"
	case "FeMemV":
		return "memv"
	case "FeRegST":
		return "st_regs"
	case "FeRegMASK":
		return "mask_regs"
	case "FeRegTMM":
		return "tmm_regs"
	case "FeRegGP":
		return "gp_regs"
	case "FeRegGPLH":
		return "gplh_regs"
	case "FeRegXMM":
		return "xmm_regs"
	case "FeRegMM":
		return "mm_regs"
	case "FeRegSREG":
		return "sreg_regs"
	case "FeRegDR":
		return "dr_regs"
	case "FeRegCR":
		return "cr_regs"
	}
	return "<error>"
}

func param(p string) (string, string) {
	typ := p[:strings.LastIndex(p, " ")]
	arg := p[strings.LastIndex(p, " ")+1:]
	return typ, arg
}

func writeIterator(name string, allfields, fields []string) {
	if len(fields) == 0 {
		fmt.Printf("\tn = %s(buf, immb, 0", name)
		if len(allfields) != 0 {
			fmt.Printf(", ")
		}
		for i, f := range allfields {
			_, arg := param(strings.TrimSpace(f))
			fmt.Print(arg)
			if i != len(allfields)-1 {
				fmt.Print(", ")
			}
		}
		fmt.Println(");")
		fmt.Println("\tif (n) cbinsn(buf, immb, n);")
		fmt.Println("\tmemset(immb, 0, 15);")
		return
	}

	a := fields[0]
	typ, arg := param(strings.TrimSpace(a))

	if isimm(typ) {
		fmt.Print("\t{\n")
		fmt.Printf("\t%s %s = 0;\n", typ, arg)
		writeIterator(name, allfields, fields[1:])
		fmt.Print("\t}\n")
		return
	}

	fmt.Printf("for (auto& %s : %s) {\n", arg, vector(typ))
	writeIterator(name, allfields, fields[1:])
	fmt.Printf("}\n")
}

func main() {
	flag.Parse()
	args := flag.Args()

	if len(args) < 1 {
		log.Fatal("no input")
	}

	dat, err := os.ReadFile(args[0])
	if err != nil {
		log.Fatal(err)
	}

	lines := strings.Split(string(dat), "\n")

	for _, l := range lines {
		if l == "" {
			continue
		}
		if !strings.HasPrefix(l, "unsigned ") {
			continue
		}
		l = l[len("unsigned "):]
		sp := strings.Split(l, "(")
		name := sp[0]
		s1 := sp[1]
		s2 := strings.Split(s1, ")")[0]
		fields := strings.Split(s2, ",")
		writeIterator(name, fields[3:], fields[3:])
	}
}

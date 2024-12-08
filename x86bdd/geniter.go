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
	case "const void*":
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
	case "int8_t":
		return "imm8s"
	case "int16_t":
		return "imm16s"
	case "int32_t":
		return "imm32s"
	case "int64_t":
		return "imm64s"
	case "uintptr_t":
		return "immuptrs"
	}
	return "<error>"
}

func param(p string) (string, string) {
	typ := p[:strings.LastIndex(p, " ")]
	arg := p[strings.LastIndex(p, " ")+1:]
	return typ, arg
}

func writeGenerator(name, flags string, allfields []string) {
	fmt.Printf("\tn = %s(buf, immb, %s", name, flags)
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
}

func writeIterator(name string, allfields, fields []string) {
	if len(fields) == 0 {
		writeGenerator(name, "0", allfields)
		// LFI only uses %gs with 32-bit registers
		writeGenerator(name, "FE_SEG(FE_GS) | FE_ADDR32", allfields)
		// Technically we don't need to understand %fs for LFI, but might as
		// well have it.
		writeGenerator(name, "FE_SEG(FE_FS)", allfields)
		return
	}

	a := fields[0]
	typ, arg := param(strings.TrimSpace(a))

	if isimm(typ) {
		fmt.Print("\t{\n")
		fmt.Printf("\t%s %s = 0;\n", typ, arg)
		writeIterator(name, allfields, fields[1:])
		fmt.Print("\t}\n")
		fmt.Print("\t{\n")
		fmt.Printf("\t%s %s = buf;\n", typ, arg)
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

#include <vector>
#include <cstdio>
#include <cassert>
#include <cstring>

#include "fadec.h"
#include "fadec-enc2.h"

#include "cudd.h"
#include "cuddObj.hh"

std::vector<FeRegGPLH> gplh_regs = {
    FE_MAKE_GPLH(FE_AX),
    FE_MAKE_GPLH(FE_CX),
    FE_MAKE_GPLH(FE_DX),
    FE_MAKE_GPLH(FE_BX),
    FE_MAKE_GPLH(FE_SP),
    FE_MAKE_GPLH(FE_BP),
    FE_MAKE_GPLH(FE_SI),
    FE_MAKE_GPLH(FE_DI),
    FE_MAKE_GPLH(FE_R8),
    FE_MAKE_GPLH(FE_R9),
    FE_MAKE_GPLH(FE_R10),
    FE_MAKE_GPLH(FE_R11),
    FE_MAKE_GPLH(FE_R12),
    FE_MAKE_GPLH(FE_R13),
    FE_MAKE_GPLH(FE_R14),
    FE_MAKE_GPLH(FE_R15),
    FE_MAKE_GPLH(FE_AH),
    FE_MAKE_GPLH(FE_CH),
    FE_MAKE_GPLH(FE_DH),
    FE_MAKE_GPLH(FE_BH),
};

std::vector<FeRegGP> gp_regs = {
    FE_AX,
    FE_CX,
    FE_DX,
    FE_BX,
    FE_SP,
    FE_BP,
    FE_SI,
    FE_DI,
    FE_R8,
    FE_R9,
    FE_R10,
    FE_R11,
    FE_R12,
    FE_R13,
    FE_R14,
    FE_R15,
};

std::vector<FeRegCR> cr_regs = {
    FE_CR(0),
    FE_CR(2),
    FE_CR(3),
    FE_CR(4),
    FE_CR(8),
};

std::vector<FeRegDR> dr_regs = {
    FE_DR(0),
    FE_DR(1),
    FE_DR(2),
    FE_DR(3),
    FE_DR(6),
    FE_DR(7),
};

std::vector<FeRegGP> gpmem_regs = {
    FE_AX,
    FE_CX,
    FE_DX,
    FE_BX,
    FE_SP,
    FE_BP,
    FE_SI,
    FE_DI,
    FE_R8,
    FE_R9,
    FE_R10,
    FE_R11,
    FE_R12,
    FE_R13,
    FE_R14,
    FE_R15,
    FE_NOREG,
    FE_IP,
};

std::vector<FeRegMM> mm_regs = {
    FE_MM0,
    FE_MM1,
    FE_MM2,
    FE_MM3,
    FE_MM4,
    FE_MM5,
    FE_MM6,
    FE_MM7,
};

std::vector<FeRegSREG> sreg_regs = {
    FE_ES,
    FE_CS,
    FE_SS,
    FE_DS,
    FE_FS,
    FE_GS,
};

std::vector<FeRegST> st_regs = {
    FE_ST0,
    FE_ST1,
    FE_ST2,
    FE_ST3,
    FE_ST4,
    FE_ST5,
    FE_ST6,
    FE_ST7,
};

std::vector<FeRegMASK> mask_regs = {
    FE_K0,
    FE_K1,
    FE_K2,
    FE_K3,
    FE_K4,
    FE_K5,
    FE_K6,
    FE_K7,
};

std::vector<FeRegTMM> tmm_regs = {
    FE_TMM0,
    FE_TMM1,
    FE_TMM2,
    FE_TMM3,
    FE_TMM4,
    FE_TMM5,
    FE_TMM6,
    FE_TMM7,
};

std::vector<FeRegXMM> xmm_regs = {
    FE_XMM0,
    FE_XMM1,
    FE_XMM2,
    FE_XMM3,
    FE_XMM4,
    FE_XMM5,
    FE_XMM6,
    FE_XMM7,
    FE_XMM8,
    FE_XMM9,
    FE_XMM10,
    FE_XMM11,
    FE_XMM12,
    FE_XMM13,
    FE_XMM14,
    FE_XMM15,
    FE_XMM16,
    FE_XMM17,
    FE_XMM18,
    FE_XMM19,
    FE_XMM20,
    FE_XMM21,
    FE_XMM22,
    FE_XMM23,
    FE_XMM24,
    FE_XMM25,
    FE_XMM26,
    FE_XMM27,
    FE_XMM28,
    FE_XMM29,
    FE_XMM30,
    FE_XMM31,
};

std::vector<unsigned char> scales = {0, 1, 2, 4, 8};

std::vector<FeMem> mem;

std::vector<FeMemV> memv;

static void
makemem()
{
    for (auto& base : gpmem_regs) {
        for (auto& idx : gpmem_regs) {
            for (auto& scale : scales) {
                mem.push_back(FE_MEM(base, scale, idx, 0));
            }
        }
    }
}

static void
makememv()
{
    for (auto& base : gpmem_regs) {
        for (auto& idx : xmm_regs) {
            for (auto& scale : scales) {
                memv.push_back(FE_MEMV(base, scale, idx, 0));
            }
        }
    }
}

static size_t count;

static ADD
insn(Cudd& mgr, uint8_t* data, bool* immb, size_t size, ADD& total)
{
    ADD bits = mgr.addOne();
    size_t bitidx = 0;
    for (int i = 0; i < (int) size; i++) {
        for (int b = 7; b >= 0; b--) {
            bool imm = immb[i];
            if (!imm) {
                uint8_t bit = (data[i] >> b) & 1;
                ADD var = mgr.addVar(bitidx);
                if (!bit) {
                    var = ~var;
                }
                bits &= var;
            }
            bitidx++;
        }
    }
    ADD result = bits.Ite(mgr.constant(size), total);
    return result;
}

static Cudd mgr(0, 0);
static ADD total = mgr.addZero();

static void
cbinsn(uint8_t* buf, bool* immb, size_t sz)
{
    if (count % 100000 == 0) {
        fprintf(stderr, "[stderr] count: %ld\n", count);
    }

    FdInstr instr;
    int ret = fd_decode(buf, sz, 64, 0, &instr);
    if (ret == (int) sz) {
        total = insn(mgr, buf, immb, sz, total);

        count++;
    }
}

int
main()
{
    fprintf(stderr, "[stderr] Generating BDD... This may take multiple hours. The result will be dumped to stdout.\n");
    makemem();
    makememv();

    uint8_t buf[15];
    bool immb[15];
    memset(immb, 0, 15);
    int n;

#include "iter.inc"

    fprintf(stderr, "[stderr] total instructions: %ld\n", count);
    fprintf(stderr, "[stderr] bdd nodes: %d\n", total.nodeCount());

    std::vector<ADD> vec = {total};
    mgr.DumpDot(vec, nullptr, nullptr, stdout);

    return 0;
}

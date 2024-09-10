#include <stdio.h>
#include <stdlib.h>

#include "generated/x86.bdd.c"

static void
test(uint8_t* code, int size)
{
    printf("instruction: ");
    for (int i = 0; i < size; i++) {
        printf("0x%x ", code[i]);
    }
    printf("\n");
    int r = evaluate(code);
    printf("returned %d\n", r);
    if (size != r) {
        exit(1);
    }
}

int main() {
    test((uint8_t[]){
        0xcc,
    }, 1);
    test((uint8_t[]){
        0x55,
    }, 1);
    test((uint8_t[]){
        0x00,
        0x00,
    }, 2);

    printf("PASSED\n");

    return 0;
}

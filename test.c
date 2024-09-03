#include <stdio.h>

#include "x86.bdd.c"

int main() {
    /* uint8_t code[] = { */
    /*     0xcc, */
    /* }; */

    uint8_t code[] = {
        0x55,
    };

    /* uint8_t code[] = { */
    /*     0x00, */
    /*     0x00, */
    /* }; */

    int r = evaluate(code);
    printf("returned: %d\n", r);

    return 0;
}

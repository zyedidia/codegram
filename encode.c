#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>

static bool
randbool()
{
    int r = rand() < RAND_MAX / 2;
    return r;
}

static uint8_t
randbyte()
{
    return rand();
}

#include "generated/x86.encode.c"

int
main()
{
    for (int n = 0; n < 1000; n++) {
        uint8_t buf[15] = {0};
        for (size_t i = 0; i < 15; i++) {
            buf[i] = randbyte();
        }

        int r = cg_encode(&buf[0]);
        assert(r > 0);

        printf(".byte ");
        for (int i = 0; i < r; i++) {
            printf("0x%x", buf[i]);
            if (i != r - 1) {
                printf(", ");
            }
        }
        printf("\n");
    }
    return 0;
}

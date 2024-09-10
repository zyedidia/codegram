#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <time.h>

#include "generated/x86.bdd.c"

static bool
randbool()
{
    int r = rand() < RAND_MAX / 2;
    return r;
}

#include "generated/x86.encode.c"

int
main()
{
    size_t n = 100 * 1024;
    uint8_t* buf = malloc(n);
    assert(buf);

    size_t i = 0;
    while (i < n - 64) {
        int r = cg_encode(&buf[i]);
        assert(r > 0);
        i += r;
    }

    printf("encoded %ld bytes\n", i);

    clock_t begin = clock();

    size_t total = 0;
    for (int iter = 0; iter < 1000; iter++) {
        i = 0;
        while (i < n - 64) {
            int r = evaluate(&buf[i]);
            assert(r > 0);
            i += r;
        }
        total += i;
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("decoded %ld bytes (%.3f MiB/s)\n", i, (double) total / time_spent / 1024 / 1024);

    return 0;
}

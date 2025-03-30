#include <stdio.h>
#include <stdlib.h>
#include "../include/length.h"
#include "../include/zfill.h"

char *zfill(const char *str, const unsigned int count) {
    const unsigned int TOTAL_LEN = count + length(str);
    char *out = malloc(TOTAL_LEN);

    int j = 0;

    for (int i = 0; i < TOTAL_LEN; i++) {
        if (i < count)
            out[i] = '0';
        else {
            out[i] = str[j];
            j++;
        }
    }

    return out;
}
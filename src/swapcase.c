#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/length.h"
#include "../include/swapcase.h"

extern const char SMALL_L[L_COUNT];
extern const char CAPITAL_L[L_COUNT];

char *swapcase(const char *str) {
    char *out = malloc(length(str));
    strcpy(out, str);

    for (int i = 0; i < length(str); i++) {
        for (int j = 0; j < L_COUNT; j++) {
            if (str[i] == SMALL_L[j])
                out[i] = CAPITAL_L[j];
            else if (str[i] == CAPITAL_L[j])    
                out[i] = SMALL_L[j];
        }
    }

    return out;
}
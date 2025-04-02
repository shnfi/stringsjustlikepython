#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/length.h"
#include "../include/title.h"

extern const char SMALL_L[L_COUNT];
extern const char CAPITAL_L[L_COUNT];

char *title(const char *str)
{
    char *out = malloc(length(str));
    strcpy(out, str);

    for (int i = 0; i < L_COUNT; i++) {
        if (str[0] == SMALL_L[i]) {
            out[0] = CAPITAL_L[i];
            break;
        }
    }

    return out;
}
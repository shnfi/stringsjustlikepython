#include <stdlib.h>
#include "../include/length.h"
#include "../include/reverse.h"

char *reverse(const char *str)
{
    char *out = malloc(length(str));

    for (int i = length(str); i >= 0; i--)
        out[length(out)] = str[i];

    return out;
}
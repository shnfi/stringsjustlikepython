#include <stdio.h>
#include "../include/casefold.h"

const char SMALL_L[L_COUNT] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
const char CAPITAL_L[L_COUNT] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

static inline unsigned int get_len(char *str)
{
    unsigned int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        len++;

    return len;
}

char *casefold(char *str)
{
    char *out = str;

    for (int i = 0; i < get_len(out); i++)
    {
        for (int j = 0; j < L_COUNT; j++)
        {
            if (out[i] == CAPITAL_L[j])
            {
                out[i] = SMALL_L[j];
                break;
            }
        }
    }

    return out;
}
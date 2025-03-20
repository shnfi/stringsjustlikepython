#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/get_len_.h"
#include "../include/capitalize.h"

const static char SMALL_L[L_COUNT] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
const static char CAPITAL_L[L_COUNT] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char *capitalize(char *str)
{
    char *out = malloc(get_len_(str));
    strcpy(out, str);
    unsigned int _index;

    for (int i = 0; i < L_COUNT; i++)
        if (SMALL_L[i] == str[0])
            _index = i;
    
    out[0] = CAPITAL_L[_index];

    return out;
}
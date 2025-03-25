#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/iswhitespace.h"\

int iswhitespace(const char *str)
{
    for (int i = 0; i < get_len_(str); i++)
        if (str[i] != ' ')
            return 0;
    
    return 1;
}
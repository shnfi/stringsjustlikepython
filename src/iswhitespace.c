#include <stdio.h>
#include "../include/length.h"
#include "../include/iswhitespace.h"\

int iswhitespace(const char *str)
{
    for (int i = 0; i < length(str); i++)
        if (str[i] != ' ')
            return 0;
    
    return 1;
}

#include <stdio.h>
#include "../include/length.h"
#include "../include/find.h"

int find(const char *str, const char char_)
{
    for (int i = 0; i < length(str); i++)
        if (str[i] == char_)
            return i;

    return -1;
}

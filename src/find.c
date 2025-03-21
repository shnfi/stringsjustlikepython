#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/find.h"

int find(char *str, char char_)
{
    for (int i = 0; i < get_len_(str); i++)
        if (str[i] == char_)
            return i;

    return -1;
}
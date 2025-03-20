#include <stdio.h>
#include <stdlib.h>
#include "../include/err_.h"
#include "../include/get_len_.h"
#include "../include/center.h"

char *center(char *str, unsigned int width)
{
    char *out = malloc(width);

    if (get_len_(str) > width)
        err_("syntax", "center(char *str, unsigned int width) the length of str should not be more than width!");

    unsigned int corner_spaces = width - get_len_(str);
    unsigned int single_side_spaces = corner_spaces / 2;

    for (int i = 0; i < single_side_spaces; i++)
        out[i] = ' ';

    for (int i = get_len_(out), j = 0; i < get_len_(str), j < get_len_(str); i++, j++)
        out[i] = str[j];

    return out;
}
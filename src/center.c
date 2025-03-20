#include <stdio.h>
#include <stdlib.h>
#include "../include/err_.h"
#include "../include/get_len_.h"
#include "../include/center.h"

char *center(char *str, unsigned int width)
{
    char *out = malloc(width);

    /*
     * if the width was less than length of the str,
     * just show an error using the err_() function.
     */

    if (get_len_(str) > width)
        err_("syntax", "center(char *str, unsigned int width) the length of str should not be more than width!");

    unsigned int corner_spaces = width - get_len_(str); // finding out how many spaces should be in the right and left of the str.
    unsigned int single_side_spaces = corner_spaces / 2; // finding out how many spaces should be in each side of the str.

    /*
     * filling the whole allocated memory of the out variable with ' '.
     */

    for (int i = 0; i < single_side_spaces; i++)
        out[i] = ' ';

    /*
     * separate the spaces of the left side, and then
     * start to write each letter of the str.
     */

    for (int i = get_len_(out), j = 0; i < get_len_(str), j < get_len_(str); i++, j++)
        out[i] = str[j];

    return out;
}
#include <stdio.h>
#include <stdlib.h>
#include "../include/helper_func/err_.h"
#include "../include/length.h"
#include "../include/center.h"

char *center(const char *str, const unsigned int width) {
    char *out = malloc(width);

    /*
     * if the width was less than length of the str,
     * just show an error using the err_() function.
     */

    if (length(str) > width)
        return str;

    unsigned int corner_spaces = width - length(str); // finding out how many spaces should be in the right and left of the str.
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

    for (int i = length(out), j = 0; i < length(str), j < length(str); i++, j++)
        out[i] = str[j];

    return out;
}

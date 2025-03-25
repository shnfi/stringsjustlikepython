#include <stdio.h>
#include <stdlib.h>
#include "../include/err_.h"
#include "../include/get_len_.h"
#include "../include/ljust.h"

char *ljust(const char *str, const unsigned int width)
{
    char *out = malloc(width);

    /*
     * if the width was less than length of the str,
     * just show an error using the err_() function.
     */

    if (get_len_(str) > width)
        err_("Syntax", "The length of given str must be less or equal to the given width!");

    /*
     * navigating the whole 'out' variable from left to right,
     * appending the ith char of the str if the i is less than
     * the length of the str, if not, just append white space.
     */

    for (int i = 0; i < width; i++)
    {
        if (i < get_len_(str))
            out[i] = str[i];
        else
            out[i] = ' ';
    }

    return out;
}
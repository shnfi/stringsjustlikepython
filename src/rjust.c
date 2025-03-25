#include <stdio.h>
#include <stdlib.h>
#include "../include/err_.h"
#include "../include/get_len_.h"
#include "../include/rjust.h"

char *rjust(const char *str, const unsigned int width)
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
     * appending whitespaces if the i is less than width - lengath
     * of the str, otherwise, appending the ith char of the str.
     */
    
    int j = 0;

    for (int i = 0; i < width; i++)
    {
        if (i >= width - get_len_(str))
        {
            out[i] = str[j];
            j++;
        }
        else
            out[i] = ' ';
    }

    return out;
}
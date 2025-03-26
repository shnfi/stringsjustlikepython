#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/length.h"
#include "../include/lower.h"

/*
 * extern those two arrays from the 'capitalize.c' file.
 */

const extern char SMALL_L[L_COUNT];
const extern char CAPITAL_L[L_COUNT];

char *lower(const char *str)
{
    char *out = malloc(length(str));
    strcpy(out, str);

    /*
     * navigating the whole str and searching for a capital
     * letter.
     */

    for (int i = 0; i < length(out); i++)
    {
        for (int j = 0; j < L_COUNT; j++)
        {
            /*
             * if each character was capital, immediatly set it to the
             * small version of that letter.
             */

            if (out[i] == CAPITAL_L[j])
            {
                out[i] = SMALL_L[j];
                break;
            }
        }
    }

    return out;
}

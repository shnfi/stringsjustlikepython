#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/get_len_.h"
#include "../include/casefold.h"

/*
 * extern those two arrays from the 'capitalize.c' file.
 */

const extern char SMALL_L[L_COUNT];
const extern char CAPITAL_L[L_COUNT];

char *casefold(char *str)
{
    char *out = malloc(get_len_(str));
    strcpy(out, str);

    /*
     * navigating the whole str and searching for a capital
     * letter.
     */

    for (int i = 0; i < get_len_(out); i++)
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
#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/casefold.h"


/*
 * defining the array of all 26 letters these are static
 * because i defined these arrays in another method too 
 * with the same name.
 */


const static char SMALL_L[L_COUNT] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
const static char CAPITAL_L[L_COUNT] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char *casefold(char *str)
{
    char *out = str;

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
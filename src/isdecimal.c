#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/isdecimal.h"

extern const char SMALL_L[L_COUNT];
extern const char CAPITAL_L[L_COUNT];

int isdecimal(char *str)
{
    for (int i = 0; i < get_len_(str); i++)
    {
        for (int j = 0; j < L_COUNT; j++)
        {
			/*
			 * return false if you got a letter, either capital or small
			 */

            if (str[i] == SMALL_L[j])
                return 0;
            
            if (str[i] == CAPITAL_L[j])
                return 0;
        }
    }

    return 1;
}

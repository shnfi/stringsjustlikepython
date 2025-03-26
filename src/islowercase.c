#include <stdio.h>
#include "../include/length.h"
#include "../include/islowercase.h"

extern const char SMALL_L[L_COUNT];

int islowercase(const char *str)
{
    int qualify;

    for (int i = 0; i < length(str); i++)
    {
        for (int j = 0; j < L_COUNT; j++)
        {
            if (str[i] == SMALL_L[j])
            {
                qualify = 1;
                break;
            }
            else
                qualify = 0;
        }

		/*
		 * if the "str" was not qualified to continue,
		 * return false and end the program.
		 */

        if (!qualify)
            return qualify;
    }
    
    return 1;
}

#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/islowercase.h"

extern const char SMALL_L[L_COUNT];

int islowercase(char *str)
{
    int qualify;

    for (int i = 0; i < get_len_(str); i++)
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

        if (!qualify)
            return qualify;
    }
    
    return 1;
}
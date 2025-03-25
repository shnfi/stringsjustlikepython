#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/istitle.h"

extern const char SMALL_L[L_COUNT];
extern const char CAPITAL_L[L_COUNT];

int istitle(const char *str)
{
    int qualify;

    for (int i = 0; i < L_COUNT; i++)
    {
        if (str[0] == CAPITAL_L[i])
        {
            qualify = 1;
            break;
        }
        else
            qualify = 0;
    }

	/*
	 * if the "str" variable was to qualified to continue,
	 * return false and end the program.
	 */

    if (!qualify)
        return 1;

    for (int i = 1; i < get_len_(str); i++)
        for (int j = 0; j < L_COUNT; j++)
            if (str[i] == CAPITAL_L[j])
                return 0;

    return qualify;
}

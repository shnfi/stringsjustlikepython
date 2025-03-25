#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/isidentifier.h"

extern const char SMALL_L[L_COUNT];
extern const char CAPITAL_L[L_COUNT];

int isidentifier(const char *str)
{
    int qualify = 1;

	/*
	 * checking if the first char of the "str" is
	 * '_', a small letter or even a capital letter.
	 * if it was one of these 3, its qualified.
	 */

    for (int i = 0; i < L_COUNT; i++)
    {
        if (str[0] != SMALL_L[i] && str[0] != CAPITAL_L[i] && str[0] != '_')
            qualify = 0;
        else
        {
            qualify = 1;
            break;
        }
    }

	/*
	 * checking the other chars of the "str".
	 */

    for (int i = 0; i < get_len_(str); i++)
    {
        for (int j = 0; j < L_COUNT; j++)
        {
            if (str[i] == SMALL_L[j] || str[i] == CAPITAL_L[j] || str[i] == '_')
            {
                qualify = 1;
                break;
            }
            else
                qualify = 0;
        }

		/*
		 * if the "str" is not qualified to continue,
		 * return false and end the program.
		 */

        if (!qualify)
            return qualify;
    }

    return qualify;
}

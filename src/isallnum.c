#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/isallnum.h"

extern const char SMALL_L[L_COUNT];
extern const char CAPITAL_L[L_COUNT];

extern const char NUMS[10];

static inline int check_num(char char_)
{
    for (int i = 0; i < 10; i++)
        if (char_ == NUMS[i])
            return 1;
    
    return 0;
}

int isallnum(char *str)
{
    int qualify;

    for (int i = 0; i < get_len_(str); i++)
    {
        for (int j = 0; j < L_COUNT; j++)
        {
            if (str[i] == SMALL_L[j] || str[i] == CAPITAL_L[j] || check_num(str[i]))
            {
                qualify = 1;
                break;
            }
            else
                qualify = 0;
        }

        if (qualify == 0)
            return qualify;
    }

    return qualify;
}
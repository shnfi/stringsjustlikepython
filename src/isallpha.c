#include <stdio.h>
#include "../include/get_len_.h"
#include "../include/isallpha.h"

const char NUMS[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

int isallpha(char *str)
{
    for (int i = 0; i < get_len_(str); i++)
        for (int j = 0; j < 10; j++)
            if (str[i] == (char) NUMS[j])
                return 1;
    
    return 0;
}
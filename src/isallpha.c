#include <stdio.h>
#include "../include/length.h"
#include "../include/isallpha.h"

const char NUMS[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

int isallpha(const char *str) {
    for (int i = 0; i < length(str); i++)
        for (int j = 0; j < 10; j++)
            if (str[i] == (char) NUMS[j])
                return 0;
    
    return 1;
}

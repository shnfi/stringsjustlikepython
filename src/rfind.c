#include <stdio.h>
#include "../include/length.h"
#include "../include/rfind.h"

int rfind(const char *str, const char *sub)
{
    int si;
    int j = length(sub) - 1;

    for (int i = length(str) - 1; i >= 0; i--) {
        if (str[i] == sub[j]) {
            j--;
            if (str[i - 1] == ' ')
                si = i;
        }
        else {
            j = length(sub) - 1;
        }

        if (j == -1)
            return si;
    }

    return 0;
}
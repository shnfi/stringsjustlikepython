#include <stdio.h>
#include "../include/length.h"
#include "../include/find.h"

int find(const char *str, const char *sub)
{
    int si;
    int j = 0;


    for (int i = 0; i < length(str); i++) {
        if (str[i] == sub[j]) {
            j++;
            if (str[i] == sub[0]) {
                if (i == 0)
                    si = i;
                else if (str[i - 1] == ' ')
                    si = i;
            }
        }
        else {
            j = 0;
        }

        if (j == length(sub))
            return si;
    }

    return 0;
}
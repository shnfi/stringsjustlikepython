#include <stdio.h>
#include "../include/length.h"
#include "../include/count.h"

int count(const char *str, const char *sub) {
    int count = 0;
    int j = 0;

    for (int i = 0; i < length(str); i++) {
        if (str[i] == sub[j])
            j++;
        else
            j = 0;

        if (j == length(sub)) {
            count++;
            j++;
        }
    }

    return count;
}
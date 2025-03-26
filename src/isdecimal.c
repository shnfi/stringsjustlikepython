#include <stdio.h>
#include "../include/length.h"
#include "../include/isdecimal.h"

extern const char SMALL_L[L_COUNT];
extern const char CAPITAL_L[L_COUNT];

int isdecimal(const char *str) {
    for (int i = 0; i < length(str); i++) {
        for (int j = 0; j < L_COUNT; j++) {
			/*
			 * return false if you got a letter, either capital or small
			 */

            if (str[i] == SMALL_L[j])
                return 0;
            
            if (str[i] == CAPITAL_L[j])
                return 0;
        }
    }

    return 1;
}

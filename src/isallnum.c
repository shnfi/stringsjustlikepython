#include <stdio.h>
#include "../include/length.h"
#include "../include/isallnum.h"

extern const char SMALL_L[L_COUNT];
extern const char CAPITAL_L[L_COUNT];

extern const char NUMS[10];

/*
 * a function to check for a char if its a number.
 */

static inline int check_num(char char_) {
    for (int i = 0; i < 10; i++)
        if (char_ == NUMS[i])
            return 1;
    
    return 0;
}

int isallnum(const char *str) {
    int qualify;

    for (int i = 0; i < length(str); i++) {
        for (int j = 0; j < L_COUNT; j++) {
			/*
			 * its number, a small letter or even a capital letter,
			 * if it was one of these 3, its qualified.
			 */

            if (str[i] == SMALL_L[j] || str[i] == CAPITAL_L[j] || check_num(str[i])) {
                qualify = 1;
                break;
            }
            else
                qualify = 0;
        }

		/*
		 * if the "str" was not qualified to continue,
		 * return false and end the program.
		 */

        if (!qualify)
            return qualify;
    }

    return qualify;
}

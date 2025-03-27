#include <stdio.h>
#include <stdlib.h>
#include "../include/length.h"
#include "../include/split.h"

char **split(const char *str, unsigned int *s) {
	/*
	 * memory allocatin for the string array in size of 
	 * 20 strings with 20 chars.
	 */

	char **out = malloc(20 * sizeof(char *));
    int j = 0, k = 0;

	/*
	 * memory allocation for each char.
	 */

    for (int i = 0; i < 20; i++)
        out[i] = malloc(20);

    for (int i = 0; i < length(str); i++) {
		/* 
		 * appending the char of the str if the ith char
		 * of the str was not equal to whitespace.
		 */

        if (str[i] != ' ') {
            out[j][k] = str[i];
            k++;
        }

		/*
		 * if it was equal to whitespace, go to the next string,
		 * point at the first char, increment the size by 1.
		 */

        else if (str[i] == ' ') {
            j++;
            k = 0;
            *s += 1;
        }
    }

	/*
	 * increment the size by 1 again at the end, because the size 
	 * of the last array is 1 more than the count of whitespcaes.
	 */

    *s += 1;

    return out;
}

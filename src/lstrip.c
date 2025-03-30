#include <stdio.h>
#include <stdlib.h>
#include "../include/length.h"
#include "../include/lstrip.h"

char *lstrip(const char *str) {
    char *out = malloc(length(str));

	/*
	 * 'go_write' variable will contain the index of the
	 * last whitespace of the left side of the str.
	 */

    unsigned int go_write;

	/*
	 * searching for white space from left to right.
	 */

    for (int i = 0; i < length(str); i++) {
        if (str[i] != ' ') {
            go_write = i;
            break;
        }
    }

    int j = 0;

	/*
	 * inserting the str chars to the 'out' variable,
	 * from the index of the last whitespace of the left 
	 * side of the str, to the index of the first whitespace
	 * of the right side of the str.
	 */

    for (int i = go_write; i <= length(str); i++) {
        out[j] = str[i];
        j++;
    }

    return out;
}
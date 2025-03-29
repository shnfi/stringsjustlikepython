#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/length.h"
#include "../include/strip.h"

char *strip(const char *str) {
    char *out = malloc(length(str));

	/*
	 * 'go_write' variable will contain the index of the
	 * last whitespace of the left side of the str.
	 *
	 * 'stop_write' variable will contain the index of the 
	 * first whitespace of the right side of the str.
	 */

    unsigned int go_write;
    unsigned int stop_write;

	/*
	 * searching for white space from left to right.
	 */

    for (int i = 0; i < length(str); i++) {
        if (str[i] != ' ') {
            go_write = i;
            break;
        }
    }

	/*
	 * searching for whitespace from right to left.
	 */
    
    for (int i = length(str); i >= 0; i--) {
        if (str[i] != ' ' && str[i - 1] != ' ') {
            stop_write = i;
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

    for (int i = go_write; i <= stop_write; i++) {
        out[j] = str[i];
        j++;
    }

    return out;
}

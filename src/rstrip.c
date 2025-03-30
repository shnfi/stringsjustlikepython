#include <stdio.h>
#include <stdlib.h>
#include "../include/length.h"
#include "../include/rstrip.h"

char *rstrip(const char *str) {
    char *out = malloc(length(str));

	/*
	 * 'stop_write' variable will contain the index of the 
	 * first whitespace of the right side of the str.
	 */

    unsigned int stop_write;

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

    for (int i = 0; i <= stop_write; i++) {
        out[j] = str[i];
        j++;
    }

    return out;
}
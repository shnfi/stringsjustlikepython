#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/length.h"
#include "../include/find.h"
#include "../include/replace.h"

char *replace(const char *str, const char *s1, const char *s2)
{
    char *out = malloc(length(str) + length(s2));
    strcpy(out, str);

    unsigned int si = find(str, s1);
    unsigned int ei;

	/* 
	 * checking for the s2 if its a substring of str.
	 */

    if (si == -1)
        return (char *) str;

    unsigned int s1_len = length(s1);
    unsigned int s2_len = length(s2);

	/*
	 * there is 3 situations in this step: 
	 *
	 * 1. when the length of the s2 is more than s1.
	 * 2. when the length of the s1 is more than s2.
	 * 3. whan the length of the s2 is euqal to length of the s2.
	 */

    if (s1_len > s2_len) {
		/*
		 * if the length of the s1 is more than s2, start from 
		 * the index of the first char of the s1, and append 
		 * the s2 chars.
		 */

        int j = 0;
        for (int i = si; i < length(str); i++) {
            out[i] = s2[j];
            j++;
        }

		/*
		 * start from the index of the last char of the s1, and
		 * append the continue of the str.
		 */

        for (int i = length(out), j = find(str, s1) + length(s1); i < length(str); i++, j++)
            out[i] = str[j];
    }
    else if (s1_len < s2_len) {
		/*
		 * if the length of the s1 is more than s2, start from 
		 * the index of the first char of the s1, and append 
		 * the s2 chars.
		 */

        int j = 0;
        for (int i = si; i < length(str); i++) {
            out[i] = s2[j];
            j++;
        }

		/*
		 * required_bytes will specify that how many bytes should
		 * the i go forward for appending the continue of str.
		 */

        const unsigned int required_bytes = length(s2) - length(s1);

		/*
		 * start from the index of the last char of the s1, and
		 * append the continue of the str with an additional count
         * of required_bytes.
		 */

        for (int i = length(out), j = find(str, s1) + length(s1); i < length(str) + required_bytes; i++, j++)
            out[i] = str[j];
    }
    else {
		/*
		 * if the length of the s1 was equal to the s2, just 
		 * replace chars to gather.
		 */

        int j = 0;
        for (int i = si; i < si + s2_len; i++) {
            out[i] = s2[j];
            j++;
        }
    }

    return out;
}

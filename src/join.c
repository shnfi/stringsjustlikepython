#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "../include/length.h"
#include "../include/helper_func/err_.h"
#include "../include/join.h"

static inline void sigsegv_handle() {
    err_("Memory", "We got a segmentation fault!");
}

char *join(const char *arr[], const unsigned int len, const char sep) {
    /*
     * a signal receiver for handling segmentation fault error (SIGSEGV).
     */

    signal(SIGSEGV, sigsegv_handle);

    /*
     * the buff_size variable is for getting the byte count that 
     * we should allocate memory for the out variable.
     * 
     * why it's declared to "len - 1"?
     * the len variable is the len of the whole aray, so our separators
     * count will be len - 1.
     */

    int buff_size = len - 1;

    for (int i = 0; i < len; i++)
        for (int j = 0; j < length(arr[i]); j++)
            buff_size++;

    char *out = malloc(buff_size);

    /*
     * for each string in the array, we append the letter to the 
     * out variable and after appending a whole string, we will append
     * the separator.
     */

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < length(arr[i]); j++) {
            out[length(out)] = arr[i][j];
        }

        /*
         * append separator if its not the last loop
         */

        if (i != len - 1)
            out[length(out)] = sep;
    }

    return out;
}

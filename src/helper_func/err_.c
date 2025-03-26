#include <stdio.h>
#include <stdlib.h>
#include "../../include/helper_func/err_.h"
#include "../../include/length.h"

void err_(const char *err_type, const char *err_describtion) {
    char *msg = malloc(length(err_type) + length(err_describtion) + 20);
    sprintf(msg, "[ERROR] -> %s = %s", err_type, err_describtion);

    printf("%s\n", msg);

    exit(1);
}

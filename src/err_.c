#include <stdio.h>
#include <stdlib.h>
#include "../include/get_len_.h"

void err_(const char *err_type, const char *err_describtion)
{
    char *msg = malloc(get_len_(err_type) + get_len_(err_describtion) + 20);
    sprintf(msg, "[ERROR] -> %s = %s", err_type, err_describtion);

    printf("%s\n", msg);

    exit(1);
}
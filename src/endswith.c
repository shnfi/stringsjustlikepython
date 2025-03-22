#include <stdio.h>
#include "../include/endswith.h"
#include "../include/get_len_.h"

int endswith(char *str, char last_char)
{
    if (str[get_len_(str) - 1] == last_char)
        return 1;
    else
        return 0;
}
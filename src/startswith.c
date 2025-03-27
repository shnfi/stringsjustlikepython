#include <stdio.h>
#include "../include/startswith.h"

int startswith(const char *str, const char first_char) {
    return str[0] == first_char;
}
#include <stdio.h>
#include "../include/endswith.h"
#include "../include/length.h"

int endswith(const char *str, const char last_char) {
    return str[length(str) - 1] == last_char;
}

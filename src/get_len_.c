#include "../include/get_len_.h"

unsigned int get_len_(const char *str)
{
    unsigned int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        len++;

    return len;
}

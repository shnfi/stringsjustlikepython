#include <stdio.h>
#include <stdlib.h>

static inline unsigned int get_len(char *str)
{
    unsigned int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        len++;

    return len;
}

void err_(char *err_type, char *err_describtion)
{
    char *msg = malloc(get_len(err_type) + get_len(err_describtion) + 20);
    sprintf(msg, "[ERROR] -> %s = %s", err_type, err_describtion);

    printf("%s\n", msg);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/stringsjustlikepython.h"

int main()
{
    char *str = malloc(strlen("ShNfI") + 1);
    strcpy(str, "ShNfI");
    printf("%s\n", casefold(str));
    
    return 0;
}
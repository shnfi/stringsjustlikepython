#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/stringsjustlikepython.h"

int main()
{
    printf("%s\n", capitalize("hello"));

    printf("%s\n", casefold("hEllOw"));

    printf("%s\n", center("hello", 10));
    printf("%s\n", center("abc", 10));
    printf("%s\n", center("a", 10));


    printf("%d\n", endswith("jfjdakl;utnjfdsklajfdlksa;jfdklsad", 's'));

    printf("%d\n", find("hello, im shnfi!", 's'));

    printf("%d\n", isallnum("78493"));

    printf("%d\n", isallpha("aajfjkd0"));
    
    return 0;
}

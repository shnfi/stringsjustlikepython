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

    printf("%d\n", isallpha("aajfjkd0")); // expected output: 0

    printf("%d\n", isdecimal("43o78")); // expected output: 0

    printf("%d\n", isidentifier("var")); // expected output: 1
    printf("%d\n", isidentifier("_var")); // expected output: 1
    printf("%d\n", isidentifier("v ar")); // expected output: 0
    printf("%d\n", isidentifier(" var")); // expected output: 0

    printf("%d\n", isallnum("abc")); // expected output: 1
    printf("%d\n", isallnum("123")); // expected output: 1
    printf("%d\n", isallnum("abc123")); // expected output: 1
    printf("%d\n", isallnum("ab/c12")); // expected output: 0
    
    return 0;
}

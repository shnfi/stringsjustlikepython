#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/stringsjustlikepython.h"

int main()
{
    printf("%s\n", capitalize("hello"));

    printf("%s\n", lower("hEllOw"));

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
    
    printf("%d\n", islowercase("hello")); // expected output: 1
    printf("%d\n", islowercase("hEllo")); // expected output: 0

    printf("%d\n", iswhitespace("abc")); // expected output: 0
    printf("%d\n", iswhitespace("   ")); // expected output: 1

    printf("%d\n", istitle("Title")); // expected output: 1
    printf("%d\n", istitle("TiTle")); // expected output: 0
    printf("%d\n", istitle("title")); // expected output: 0

    printf("%d\n", isuppercase("HELLO")); // expected output: 1
    printf("%d\n", isuppercase("Hello")); // expected output: 0
    printf("%d\n", isuppercase("heLlo")); // expected output: 0

    char *arr[] = {"A", "AB", "ABC"};
    printf("%s\n", join((const char **) arr, sizeof(arr) / sizeof(arr[0]), '_')); // expected output: A_B_C

    printf("%s\n", lower("HeLLoW")); // expected output: hellow

    return 0;
}

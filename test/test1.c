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


    printf("%d\n", endswith("hello, i really love apples", 's')); // expected output: 1
    printf("%d\n", endswith("hello, i really love apple", 's')); // expected output: 0

    printf("%d\n", find("hello, im shnfi!", "im")); // expected output: 1
    printf("%d\n", find("hello, im shnfi!", "s")); // expected output: 1
    printf("%d\n", find("hello, im shnfi!", "jacob")); // expected output: 0

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

    printf("%s is cool!\n", ljust("banana", 10)); // expected output: banana     is cool!

    printf("%s is cool!\n", rjust("banana", 10)); // expected output:       banana is cool!

    int size = 0;
    char **arr2 = split("hello world im shnfi", (unsigned int *) &size, ' ');
    for (int i = 0; i < size; i++)
        printf("%s, ", arr2[i]); // expected output: hello, world, im shnfi,
    printf("\n");
    size = 0;
    char **arr3 = split("jake-stop-being-dumb", (unsigned int *) &size, '-');
    for (int i = 0; i < size; i++)
        printf("%s, ", arr3[i]); // expected output: hello, world, im shnfi,
    printf("\n");

    printf("%d\n", startswith("jake really have to go!", 'j')); // expected output: 1
    printf("%d\n", startswith("alex really have to go!", 'j')); // expected output: 0

    printf("%s\n", strip("   hello world   ")); // expected output: hello world

    printf("%s\n", lstrip("   hello world   ")); // expected output: hello world   

    printf("%s\n", rstrip("   hello world   ")); // expected output:    hello world

    printf("%s\n", swapcase("hEllOw")); // expected output: HeLLoW

    printf("%s\n", zfill("shnfi", 5));

    printf("%d\n", count("hello, im shnfi, my name is shnfi", "shnfi")); // expected output: 2
    printf("%d\n", count("hello, im shnfi, my name is shnfi, shnfi is cool, shnfi is a nickname", "shnfi")); // expected output: 4

    printf("%s\n", replace("hello jacob, nice to meet you!", "jacob", "shnfi")); // expected output: hello shnfi, nice to meet you!
    printf("%s\n", replace("hello alexander, nice to meet you!", "alexander", "shnfi")); // expected output: hello shnfi, nice to meet you!
    printf("%s\n", replace("hello ali, nice to meet you!", "ali", "shnfi")); // expected output: hello shnfi, nice to meet you!
    printf("%s\n", replace("hello mr jackson, nice to meet you!", "mr jackson", "shnfi")); // expected output: hello shnfi, nice to meet you!
    printf("%s\n", replace("hello world", "hello", "bye")); // expected output: bye world

    printf("%s\n", title("shnfi")); // expected output: Shnfi
    printf("%s\n", title("ray")); // expected output: Ray

    printf("%d\n", find("hello mr, i love you mr!", "mr")); // expected output: 6
    printf("%d\n", rfind("hello mr, i love you mr!", "mr")); // expected output: 21

    return 0;
}

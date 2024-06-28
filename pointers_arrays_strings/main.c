#include "holberton.h"
#include <stdio.h> // for printf

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hell";
    char str4[] = "World";

    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, _strcmp(str1, str2)); // should return 0
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, _strcmp(str1, str3)); // should return a positive number
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str4, _strcmp(str1, str4)); // should return a negative number

    return (0);
}

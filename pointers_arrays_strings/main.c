#include "holberton.h"
#include <stdio.h> // for printf

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    char str4[] = "hello";

    printf("Comparing '%s' and '%s': %d\n", str1, str2, _strcmp(str1, str2));
    printf("Comparing '%s' and '%s': %d\n", str1, str3, _strcmp(str1, str3));
    printf("Comparing '%s' and '%s': %d\n", str1, str4, _strcmp(str1, str4));

    return (0);
}

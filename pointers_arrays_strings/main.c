#include "holberton.h"
#include <stdio.h> // for printf

int main(void)
{
    char str[] = "hello, world! this is a test. let's see if it works.";

    printf("Original string: %s\n", str);

    cap_string(str);

    printf("Capitalized string: %s\n", str);

    return (0);
}

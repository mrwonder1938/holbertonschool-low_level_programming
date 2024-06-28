#include "holberton.h"
#include <stdio.h> // for printf

int main(void)
{
    char str[] = "Hello, World! Let's convert this to 1337.";

    printf("Original string: %s\n", str);

    leet(str);

    printf("Leet encoded string: %s\n", str);

    return (0);
}

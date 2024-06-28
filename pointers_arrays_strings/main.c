#include "holberton.h"
#include <stdio.h> // for printf

int main(void)
{
    char dest[50];
    char src[] = "Hello, World!";
    int n = 10; // Maximum number of characters to copy

    printf("Before _strncpy:\n");
    printf("src: %s\n", src);

    _strncpy(dest, src, n);

    printf("\nAfter _strncpy:\n");
    printf("dest: %s\n", dest);

    return (0);
}

#include "holberton.h"
#include <stdio.h> // for printf

int main(void)
{
    char dest[50] = "Hello ";
    char src[] = "World!";
    int n = 7; // Maximum number of characters to concatenate

    printf("Before _strncat:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    _strncat(dest, src, n);

    printf("\nAfter _strncat:\n");
    printf("dest: %s\n", dest);

    return (0);
}

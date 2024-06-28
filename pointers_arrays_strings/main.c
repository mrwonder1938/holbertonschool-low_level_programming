#include "holberton.h"
#include <stdio.h> // for printf

int main(void)
{
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);

    string_toupper(str);

    printf("Uppercase string: %s\n", str);

    return (0);
}

#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);
    rev_string(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

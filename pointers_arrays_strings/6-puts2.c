#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The string to process.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0)
            _putchar(str[i]);  /* Call _putchar to print character */
        i++;
    }
    _putchar('\n');  /* Print newline at the end */
}


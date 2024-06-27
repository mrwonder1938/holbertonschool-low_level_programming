#include "main.h"
#include <string.h> // Include for strlen function

/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
    int length = strlen(str); // Use strlen to get the length of the string
    int i, start;

    if (length % 2 == 0)
    {
        start = length / 2;
    }
    else
    {
        start = (length + 1) / 2;
    }

    for (i = start; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}

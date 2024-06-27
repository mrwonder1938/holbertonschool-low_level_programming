#include "main.h"
#include <string.h> /* Include for strlen function */

/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
    int length = strlen(str); /* Use strlen to get the length of the string */
    int start; // Variable to store the starting index for printing
    int i; // Loop variable

    if (length % 2 == 0)
    {
        start = length / 2; // If even length, start from length/2
    }
    else
    {
        start = (length + 1) / 2; // If odd length, start from (length+1)/2
    }

    for (i = start; i < length; i++)
    {
        _putchar(str[i]); // Print each character from start to end
    }
    _putchar('\n'); // Print a new line at the end
}

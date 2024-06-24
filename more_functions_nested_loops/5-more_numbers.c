#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *                followed by a new line.
 */
void more_numbers(void)
{
    int i, j;
    char buffer[21]; /* Buffer to hold numbers from 0-14 and newline character */

    for (i = 0; i < 10; i++)
    {
        char *ptr = buffer;

        for (j = 0; j <= 14; j++)
        {
            if (j > 9)
            {
                *ptr++ = (j / 10) + '0'; /* Tens place */
            }
            *ptr++ = (j % 10) + '0'; /* Units place */
        }

        *ptr++ = '\n'; /* Newline character */
        
        /* Declare k outside the for loop to comply with C89 standard */
        int k;
        for (k = 0; k < (ptr - buffer); k++)
        {
            _putchar(buffer[k]);
        }
    }
}

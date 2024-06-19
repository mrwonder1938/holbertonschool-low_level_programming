#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet letters ten times
 * 
 * Description: The function uses a loop to print the alphabet
 *              followed by a newline, ten times.
 * 
 * Return: void
 */
void print_alphabet_x10(void)
{
    int counter = 0;
    int letter;

    while (counter++ < 10) // Adjusted to run exactly ten times
    {
        for (letter = 'a'; letter <= 'z'; letter++)
            _putchar(letter);

        _putchar('\n'); // Changed 10 to '\n' for clarity
    }
}

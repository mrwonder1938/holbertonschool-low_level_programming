#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, excluding 2 and 4,
 *                      followed by a new line.
 */
void print_most_numbers(void)
{
	int num;
	char buffer[10];
	int index = 0;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			buffer[index++] = num + '0';
		}
	}
	buffer[index] = '\n';
	_putchar(buffer);
}

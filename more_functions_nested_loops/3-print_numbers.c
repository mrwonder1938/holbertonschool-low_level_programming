#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar(num + '0'); /* Print the digit character */
		num++;
	}
	_putchar('\n'); /* Print newline character after all numbers */
}

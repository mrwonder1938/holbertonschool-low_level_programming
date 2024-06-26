#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);  /* Use _putchar instead of putchar */
		str++;
	}
	_putchar('\n');  /* Print a newline character at the end */
}

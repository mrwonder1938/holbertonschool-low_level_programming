#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: The size of the triangle
 *
 * Description: This function prints a right-aligned triangle
 *              using the '#' character. If the size is 0 or less,
 *              it prints only a new line.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: pointer to an int
 */

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n;

	n = 10;
	reset_to_98(&n);
	printf("n is now: %d\n", n);
	return (0);
}


#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	/* Calculate the length of the string */
	int len = 0;
	int i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	/* Swap characters from the start and end of the string */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

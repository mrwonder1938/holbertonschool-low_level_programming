/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* Check if c is within the uppercase ASCII range */
	if (c >= 'A' && c <= 'Z')
	{
		return (1); /* c is uppercase */
	}
	else
	{
		return (0); /* c is not uppercase */
	}
}

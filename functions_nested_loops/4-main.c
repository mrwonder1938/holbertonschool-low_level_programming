#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0'); // Output '1' (true) because 'H' is an alphabetic character
    
    r = _isalpha('o');
    _putchar(r + '0'); // Output '1' (true) because 'o' is an alphabetic character
    
    r = _isalpha(108);
    _putchar(r + '0'); // Output '0' (false) because 108 ('l') is not an alphabetic character
    
    r = _isalpha(';');
    _putchar(r + '0'); // Output '0' (false) because ';' is not an alphabetic character
    
    _putchar('\n');
    return (0);
}

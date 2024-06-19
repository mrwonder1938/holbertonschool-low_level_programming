#include "main.h"

void print_alphabet(void)
{
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
    for (int i = 0; alphabet[i] != '\0'; i++)
    {
        _putchar(alphabet[i]);
    }
}

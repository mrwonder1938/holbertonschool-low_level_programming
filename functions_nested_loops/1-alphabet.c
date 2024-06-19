#include <stdio.h>

int _putchar(char c)
{
    return putchar(c);
}

void print_alphabet(void)
{
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
    for (int i = 0; alphabet[i] != '\0'; i++)
    {
        _putchar(alphabet[i]);
    }
}

int main(void)
{
    print_alphabet();
    return 0;
}

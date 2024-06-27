#include "main.h"
#include <stdio.h>

int main(void)
{
    char *str1 = "Hello, world!";
    char *str2 = "123456789";
    char *str3 = "EvenLength";

    puts_half(str1);  // Expected output: "world!"
    puts_half(str2);  // Expected output: "6789"
    puts_half(str3);  // Expected output: "Length"

    return 0;
}

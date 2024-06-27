#include "main.h"
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, World!";
    char dest[50];

    _strcpy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}

#include <stdio.h>
#include "main.h"

int main() {
    char str[] = "Hello, world!";
    int length = _strlen(str);
    
    printf("Length of the string '%s' is: %d\n", str, length);

    return 0;
}

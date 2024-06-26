#include "main.h"

/* Function to print a string followed by a newline to stdout */
void _puts(char *str) {
    while (*str != '\0') {
        _putchar(*str);  /* Use _putchar instead of putchar */
        str++;
    }
    _putchar('\n');  /* Print a newline character at the end */
}


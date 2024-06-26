#include "main.h"  // Include any necessary headers here

// Function to print a string followed by a newline to stdout
void _puts(char *str) {
    while (*str != '\0') {
        putchar(*str);    /* Print the current character */
        str++;            /* Move to the next character in the string */
    }
    putchar('\n');         /* Print a newline character at the end */
}

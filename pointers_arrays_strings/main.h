#include <stdio.h>  // Include standard I/O header for putchar

#include "main.h"   // Include your own header file for function prototypes

// Function to print a string followed by a newline to stdout
void _puts(char *str) {
    while (*str != '\0') {
        putchar(*str);    /* Print the current character */
        str++;            /* Move to the next character in the string */
    }
    putchar('\n');         /* Print a newline character at the end */
}

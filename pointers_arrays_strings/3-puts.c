#include <stdio.h>

void _puts(char *str) {
    // Iterate through each character in the string until we reach '\0'
    while (*str != '\0') {
        putchar(*str);  // Print the current character
        str++;         // Move to the next character in the string
    }
    putchar('\n');     // Print a newline character after printing the string
}

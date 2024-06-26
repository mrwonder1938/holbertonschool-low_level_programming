#include <stdio.h>

/* Function to calculate the length of a string */
int _strlen(char *s) {
    int length = 0;

    /* Iterate through the string until the null terminator is encountered */
    while (*s != '\0') {
        length++;
        s++;  // Move to the next character
    }

    return length;
}

/* Example usage */
int main() {
    char str[] = "Hello, world!";
    int length = _strlen(str);
    
    printf("Length of the string '%s' is: %d\n", str, length);

    return 0;
}

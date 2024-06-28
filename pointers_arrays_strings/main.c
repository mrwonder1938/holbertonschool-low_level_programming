#include <stdio.h>
#include "main.h"

int main(void) {
    // Test cases
    char str1[] = "Hello, world!";
    char str2[] = "";
    char str3[] = "This is a test string.";
    char str4[] = "1234567890";

    printf("Length of '%s' is %d\n", str1, _strlen(str1));  // Output: 13
    printf("Length of '%s' is %d\n", str2, _strlen(str2));  // Output: 0
    printf("Length of '%s' is %d\n", str3, _strlen(str3));  // Output: 21
    printf("Length of '%s' is %d\n", str4, _strlen(str4));  // Output: 10

    return 0;
}

#include <stdio.h>
#include "main.h"

int main(void) {
    // Test cases
    char str1[] = "   -42";
    char str2[] = "4193 with words";
    char str3[] = "words and 987";
    char str4[] = "-91283472332";

    printf("%d\n", _atoi(str1));  // Output: -42
    printf("%d\n", _atoi(str2));  // Output: 4193
    printf("%d\n", _atoi(str3));  // Output: 0
    printf("%d\n", _atoi(str4));  // Output: -2147483648 (or INT_MIN)

    return 0;
}

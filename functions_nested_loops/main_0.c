// main_0.c
#include <stdio.h>
#include "4-isalpha.h" // Include the header file

void test_isalpha() {
    char n = 'A';
    int r;

    r = _isalpha(n); // Call _isalpha

    printf("Result: %d\n", r);
}

int main() {
    test_isalpha();
    return 0;
}

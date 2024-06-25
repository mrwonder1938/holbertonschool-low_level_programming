#include <stdio.h>

// Function prototype
void reset_to_98(int *n);

int main() {
    int num = 5;

    printf("Before reset_to_98: %d\n", num);

    reset_to_98(&num);  // Pass the address of num to the function

    printf("After reset_to_98: %d\n", num);

    return 0;
}


/* Function implementation */
void reset_to_98(int *n) {
    *n = 98;  /* Dereference the pointer and update the value it points to 98 */
}

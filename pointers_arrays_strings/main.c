// main.c

#include <stdio.h>
#include "main.h"  // Include the header file where reset_to_98 is declared

int main() {
    int num = 5;

    printf("Before reset_to_98: %d\n", num);

    reset_to_98(&num);  // Call reset_to_98 with a pointer to num

    printf("After reset_to_98: %d\n", num);

    return 0;
}

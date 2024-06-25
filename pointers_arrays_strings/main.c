#include <stdio.h>
#include "main.h"  /* Include the header file where the function prototype is declared */

int main() {
    int num = 5;

    printf("Before reset_to_98: %d\n", num);

    reset_to_98(&num);  /* Pass the address of num to the function */

    printf("After reset_to_98: %d\n", num);

    return 0;
}

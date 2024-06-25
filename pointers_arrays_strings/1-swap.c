#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
    int temp; // Temporary variable to hold the value during swap

    temp = *a; // Store the value at address a in temp
    *a = *b;   // Assign the value at address b to address a
    *b = temp; // Assign the value in temp to address b
}

// Example usage of the swap_int function
int main(void)
{
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call the swap_int function to swap values of x and y
    swap_int(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

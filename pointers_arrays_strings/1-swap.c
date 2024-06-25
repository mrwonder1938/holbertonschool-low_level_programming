#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */

void swap_int(int *a, int *b)

{
    int temp; /* Temporary variable to hold the value during swap */

    temp = *a; /* Store the value at address a in temp */
    *a = *b;   /* Assign the value at address b to address a */
    *b = temp; /* Assign the value in temp to address b */
}


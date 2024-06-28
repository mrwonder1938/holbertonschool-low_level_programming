#include "holberton.h"
#include <stdio.h> // for printf

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    print_array(array, n);

    reverse_array(array, n);

    printf("Reversed array:\n");
    print_array(array, n);

    return (0);
}

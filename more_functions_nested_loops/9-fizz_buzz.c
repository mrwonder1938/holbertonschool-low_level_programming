#include <stdio.h>

/**
 * fizzbuzz - Prints the numbers from 1 to 100, but for multiples of three
 * prints "Fizz" instead of the number and for the multiples of five
 * prints "Buzz". For numbers which are multiples of both three and five
 * prints "FizzBuzz".
 */
void fizzbuzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            /* Buffer to hold digits of i */
            char buffer[10];
            sprintf(buffer, "%d", i);
            printf("%s", buffer);
        }

        if (i != 100)
        {
            printf(" ");
        }
    }
    printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    fizzbuzz();
    return (0);
}

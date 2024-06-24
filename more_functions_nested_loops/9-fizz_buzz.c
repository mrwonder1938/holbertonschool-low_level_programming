#include <unistd.h>

/* Declaration of _putchar function */
int _putchar(char c) {
    return write(1, &c, 1);  /* Using write system call to output a single character */
}

/* Function to print FizzBuzz sequence */
void fizzbuzz(void) {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            /* Print "FizzBuzz" */
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        } else if (i % 3 == 0) {
            /* Print "Fizz" */
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
        } else if (i % 5 == 0) {
            /* Print "Buzz" */
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        } else {
            /* Print the number i */
            int temp = i;
            int digits = 0;
            while (temp != 0) {
                temp /= 10;
                digits++;
            }
            temp = i;
            char buffer[10];  /* Buffer to hold digits of i */
            int idx = digits - 1;
            while (temp != 0) {
                buffer[idx--] = temp % 10 + '0';
                temp /= 10;
            }
            int j;  // Move declaration to the beginning of the block
            for (j = 0; j < digits; j++) {
                _putchar(buffer[j]);
            }
        }

        /* Print space after each number or word, except after the last one */
        if (i != 100) {
            _putchar(' ');
        }
    }
    _putchar('\n');
}

int main(void) {
    fizzbuzz();  /* Call the fizzbuzz function */
    return (0);
}

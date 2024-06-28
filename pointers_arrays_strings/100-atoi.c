#include <limits.h>
#include "main.h"

int _atoi(char *s) {
    int i = 0;
    int sign = 1;
    int result = 0;
    int found_number = 0;

    // Skip leading non-digit characters and handle signs
    while (s[i] != '\0') {
        if (s[i] == '-') {
            sign = -sign;
        } else if (s[i] == '+') {
            // Continue without changing the sign
        } else if (s[i] >= '0' && s[i] <= '9') {
            // Found the start of the number
            found_number = 1;
            break;
        }
        i++;
    }

    // If no number was found, return 0
    if (!found_number) {
        return 0;
    }

    // Convert digits to integer
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        // Check for overflow
        if (result > (INT_MAX - digit) / 10) {
            if (sign == 1) {
                return INT_MAX;
            } else {
                return INT_MIN;
            }
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}

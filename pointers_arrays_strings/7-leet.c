#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
    int i, j;
    char leet_map[10][2] = {
        {'a', '4'}, {'A', '4'},
        {'e', '3'}, {'E', '3'},
        {'o', '0'}, {'O', '0'},
        {'t', '7'}, {'T', '7'},
        {'l', '1'}, {'L', '1'}
    };

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (s[i] == leet_map[j][0])
            {
                s[i] = leet_map[j][1];
                break;
            }
        }
    }

    return (s);
}

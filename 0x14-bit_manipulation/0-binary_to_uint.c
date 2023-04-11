#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int total;
    unsigned int power;
    int length;

    if (b == NULL)
        return (0);

    for (length = 0; b[length]; length++)
    {
        if (b[length] != '0' && b[length] != '1')
            return (0);
    }

    for (power = 1, total = 0, length--; length >= 0; length--, power *= 2)
    {
        if (b[length] == '1')
            total += power;
    }

    return (total);
}
#include <stdio.h>

/**
 * binary_to_uint - change a binary number to an unsigned int
 * @b: char string
 * Return: the converted decimal number or 0 if there is an unconvertible char
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int total = 0; // initialize total to 0
    unsigned int power = 1; // initialize power to 1
    int length;

    if (b == NULL) // check if string is null
        return 0;

    for (length = 0; b[length]; length++) // calculate length of the string
    {
        if (b[length] != '0' && b[length] != '1') // check if each character is valid
            return 0;
    }

    for (length--; length >= 0; length--, power *= 2) // iterate through the string in reverse order
    {
        if (b[length] == '1') // if the current character is 1, add the corresponding power of 2 to the total
            total += power;
    }

    return total; // return the converted decimal number
}
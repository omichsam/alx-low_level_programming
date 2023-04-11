#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 *  decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
    unsigned long int temp;
    int shift_s;

    if (n == 0)
    {
        printf("0");
        return;
    }

    for (temp = n, shift_s = 0; (temp >>= 1) > 0; shift_s++)
        ;

    for (; shift_s >= 0; shift_s--)
    {
        if ((n >> shift_s) & 1)
            printf("1");
        else
            printf("0");
    }
}
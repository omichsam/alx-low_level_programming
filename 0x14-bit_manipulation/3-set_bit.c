#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Returns 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int k;

    if (index > 64)
        return (-1);

    for (p = 1; index > 0; index--, k *= 2)
        ;
    *n += k;

    return (1);
}
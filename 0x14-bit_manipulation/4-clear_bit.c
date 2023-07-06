#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int chk_hold;

	if (index > 64)
		return (-1);
	chk_hold = index;
	for (i = 1; chk_hold > 0; i *= 2, chk_hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}

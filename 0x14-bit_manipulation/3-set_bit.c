#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number k_passed by k_pointer
 * @index: index k_position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k_p;

	if (index > 64)
		return (-1);

	for (k_p = 1; index > 0; index--, k_p *= 2)
		;
	*n += k_p;

	return (1);
}

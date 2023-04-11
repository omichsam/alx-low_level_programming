#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diffs;
	int m_counter;

	diffs = n ^ m;
	m_counter = 0;

	while (diffs)
	{
		m_counter++;
		diffs &= (diffs - 1);
	}

	return (m_counter);
}


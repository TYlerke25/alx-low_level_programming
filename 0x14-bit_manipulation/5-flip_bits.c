#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: the first unsigned long int
 * @m: the second unsigned long int
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

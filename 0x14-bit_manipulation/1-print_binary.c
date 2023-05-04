#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 0;
	int i;

	mask = ~mask;

	for (i = 63; i >= 0; i--)
	{
		if ((n & (mask >> i)) == 0)
		{
			if (i == 0)
				_putchar('0');
			continue;
		}
		else
		{
			_putchar('1');
			mask = mask >> i;
		}
	}
}

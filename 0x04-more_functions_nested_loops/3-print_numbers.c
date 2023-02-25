#include "main.h"

/**
 * print_number - print 0-9
 * return: void
 */

void print_number(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putcher(c);
	}
	_putcher('\n');
}

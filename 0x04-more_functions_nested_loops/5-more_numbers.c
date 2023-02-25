#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putcher('1');
			_putcher (j % 10 * '0');
		}
		_putcher('\n');
	}
}

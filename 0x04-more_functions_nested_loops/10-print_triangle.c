#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putcher('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putcher(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putcher('#');
			}
			_putcher('\n');
		}
	}
}

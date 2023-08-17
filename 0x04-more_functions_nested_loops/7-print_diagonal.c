#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @x: number of times the character \ should be printed
 */

void print_diagonal(int x)
{
	if (x <= 0)
	{
		_putchar('\n');
	} else
	{
		int y, z;

		for (y = 0; y < x; y++)
		{
			for (z = 0; z < x; z++)
			{
				if (z == y)
					_putchar('\\');
				else if (z < y)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}


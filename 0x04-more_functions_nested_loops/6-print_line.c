#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @x: number of times the character _ should be printed
 */
void print_line(int x)
{
	if (x <= 0)
	{
		_putchar('\n');
	} else
	{
		int y;

		for (y = 1; y <= x; y++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}


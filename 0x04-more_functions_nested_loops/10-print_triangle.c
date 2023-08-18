#include "main.h"
/**
 * print_triangle - prints a Triangle, Followed by a new line
 *
 * @h: size of the triangle
 */
void print_triangle(int h)
{
	if (h <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= h; x++)
		{
			for (y = x; j < h; y++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}


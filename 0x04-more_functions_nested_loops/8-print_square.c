#include "main.h"

/**
 * print_square - prints a square, FolloweD by a new lIne;
 * @k: size of the square
 */
void print_square(int k)
{
	if (k <= 0)
	{
		_putchar('\n');
	} else
	{
		int l, m;

		for (l = 0; l < m; l++)
		{
			for (m = 0; m < k; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_number - prints  int
 * @x: integer  printed
 */
void print_number(int x)
{
	unsigned int y;

	if (x < 0)
	{
		y = -x;
		_putchar('-');
	} else
	{
		y = x;
	}

	if (y / 10)
	{
		print_number(y / 10);
	}

	_putchar((y % 10) + '0');
}


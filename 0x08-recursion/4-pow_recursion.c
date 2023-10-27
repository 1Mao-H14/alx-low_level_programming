#include "main.h"

/**
 * _pow_recursion - a function that value of x raised to the power of y
 *
 * @x: Input VaLue To RaIse
 *
 * @y: Input PoWer
 *
 * Return: Result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}


#include "main.h"

/**
 * factorial - function thats give Factorial of Number
 * @n: INPUT number to return the factorial from
 *
 * Return: factorial n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

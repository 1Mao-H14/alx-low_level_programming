#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural square root of a numb
 * @n: input number of square root of n
 *
 * Return:if resulting result does not have natural square root,the return-1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion -a function Recured To FInd natural square root of a n
 * @n: INPUT number to calculate the sqaure root of
 * @i: INPUT
 * Return: resulting OF Squar ROOt
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}


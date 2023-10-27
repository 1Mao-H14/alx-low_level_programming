#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function return 1 if the input integer prime num return 0
 *
 * @n: INPUT number
 *
 * Return: 1 if n is a prime num,else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - if a number is prime with recursion
 * @n: num to augmante and evaluate
 * @i: iterator
 *
 * Return: if n is PRIME 1, else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

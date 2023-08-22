#include "main.h"

/**
 * print_array - a function that prints n elements of Array
 *
 * @h: array name
 *
 * @n: is the number of elements IN the array to be Printed
 *
 * Return: a and n inputs
 */
void print_array(int *h, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", h[c]);
	}
		if (c == (n - 1))
		{
			printf("%d", h[n - 1]);
		}
			printf("\n");
}


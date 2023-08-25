#include "main.h"
/**
 * reverse_array - reverse array of integers
 *
 * @x: array
 *
 *
 * @m: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *x, int m)
{
	int a;
	int b;

	for (a = 0; a < m--; a++)
	{
		b = x[a];
		x[a] = x[m];
		x[m] = b;
	}
}


#include "main.h"
/**
 * swap_int - Swaps the values of Two integers
 *
 * @a: integer to swap
 *
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int C;

	C = *a;
	*a = *b;
	*b = C;
}

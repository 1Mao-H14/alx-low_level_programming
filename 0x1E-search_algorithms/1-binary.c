#include "search_algos.h"

/**
 * binary_search - A FUNCTION THATS searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: INPUT pointer to first element of array to seach
 * @size: INPUT number of elements in array
 * @value: INPUT value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int down, bet, up;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	down = 0;
	up = size - 1;

	while (down <= up)
	{
		bet = (down + up) / 2;

		printf("Searching in array: ");
		for (x = down; x <= up; x++)
			printf("%i%s", array[x], x == up ? "\n" : ", ");

		if (array[bet] < value)
			down = bet + 1;
		else if (array[bet] > value)
			up = bet - 1;
		else
			return (bet);
	}

	return (-1);
}

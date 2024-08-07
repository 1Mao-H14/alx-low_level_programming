#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: argument input array
 * @size: argument size of the array
 * @value: argument value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, l, c, bf;

	if (array == NULL || size == 0)
		return (-1);

	l = (int)sqrt((double)size);
	c = 0;
	bf = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		c++;
		bf = idx;
		idx = c * l;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", bf, idx);

	for (; bf <= idx && bf < (int)size; bf++)
	{
		printf("Value checked array[%d] = [%d]\n", bf, array[bf]);
		if (array[bf] == value)
			return (bf);
	}

	return (-1);
}

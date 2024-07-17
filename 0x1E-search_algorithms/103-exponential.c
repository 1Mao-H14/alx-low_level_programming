#include "search_algos.h"

/**
 * recursive_search - A FUNCTION THATS searches for a value in an
 * Array of
 * integers using the Binary search algorithm
 *
 *
 * @array:argument  input array
 * @size: argument size of the array
 * @value: argument value to search
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t dm = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (dm && size % 2 == 0)
		dm--;

	if (value == array[dm])
		return ((int)dm);

	if (value < array[dm])
		return (recursive_search(array, dm, value));

	dm++;

	return (recursive_search(array + dm, size - dm, value) + dm);
}

/**
 * binary_search -A function that  calls to binary_search to return
 * the index of the number
 *
 * @array: argument input array
 * @size: argument size of the array
 * @value: argument  value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursive_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}

/**
 * exponential_search - A FUNCTION THATS searches for a value in an array of
 * integers using the Exponential search algorithm
 *
 * @array: argument input array
 * @size: argument size of the array
 * @value:argument  value to search in
 * Return: index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx, su;
	int rs;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	idx = 1;

	while (array[idx] < value && idx < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx *= 2;
	}

	su = (idx >= size) ? (size - 1) : idx;
	idx /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)idx, (int)su);

	rs = binary_search(array + idx, (su + 1) - idx, value);

	if (rs >= 0)
		rs += idx;

	return (rs);
}

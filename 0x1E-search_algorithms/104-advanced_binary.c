#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - A FUNCTION THATS helper to `advanced_binary`, recursively searches
 * for a value in an integer array
 * @array:INPUT  pointer to first element of array to seach
 * @value:INPUT  value to search for
 * @low:INPUT  starting index in array
 * @high: INPUT ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t centre , x;

	if (!array)
		return (-1);

	centre = (low + high) / 2;
	printf("Searching in array: ");
	for (x = low; x <= high; x++)
		printf("%x%s", array[x], x == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[centre] < value)
			return (binary_search_recursion(array, value,
							centre + 1, high));
		if (array[centre] >= value)
			return (binary_search_recursion(array, value,
							low, centre));
	}

	return (-1);
}

/**
 * advanced_binary - A function to searches for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array:input  pointer to first element of array to search
 * @size: input number of elements in array
 * @value:input  value to search
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t H = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, L, H));
}


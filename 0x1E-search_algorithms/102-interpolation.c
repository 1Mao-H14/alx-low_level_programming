#include "search_algos.h"

/**
  * interpolation_search -a function thats  Searches for a
  *  value in a sorted array
  * of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size:argument input  The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  *
  * Description: Prints THE VALUE EACH time  compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, m, v;

	if (array == NULL)
		return (-1);

	for (m = 0, v = size - 1; v >= m;)
	{
		x = m + (((double)(v - m) / (array[v] - array[m])) * (value - array[m]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			v = x - 1;
		else
			m = x + 1;
	}

	return (-1);
}

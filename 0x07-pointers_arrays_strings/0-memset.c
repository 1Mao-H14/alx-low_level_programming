#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 *
 * @a: Starting Address of memory to be filled
 * @d: The desired value
 * @s: number of bytes to  CHanged
 *
 * Return: changed array with new value for s bytes
 */
char *_memset(char *a, char d, unsigned int s)
{
	int h = 0;

	for (; s > 0; h++)
	{
		a[s] = d;
		s--;
	}
	return (a);
}

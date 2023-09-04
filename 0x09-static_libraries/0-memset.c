#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 *
 * @s: Starting Address of memory to be filled
 * @b: The desired value
 * @n: number of bytes to  CHanged
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int h = 0;

	for (; n > 0; h++)
	{
		s[h] = b;
		n--;
	}
	return (s);
}


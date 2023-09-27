#include <stdlib.h>
#include "main.h"

/**
 * *_memset -a function  thats  FILLS MEMORY CONsTant Byte
 * @s: AREA MEMORY FILL
 * @b: char ARGUMENT TO ENTRE
 * @n: ARGUMENT number of times to copy b
 *
 * Return: POINTER TO THE  AREA MEMORY s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		s[v] = b;
	}

	return (s);
}

/**
 * *_calloc - function allocates memory array nmemb of size bytes each element
 * @nmemb: number of elements in the array
 * @size:THE SIZE of each element
 *
 * Return: Pointer to MOMERY BEEN ALLOCATED
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *qws;

	if (nmemb == 0 || size == 0)
		return (NULL);

	qws = malloc(size * nmemb);

	if (qws == NULL)
		return (NULL);

	_memset(qws, 0, nmemb * size);

	return (qws);
}

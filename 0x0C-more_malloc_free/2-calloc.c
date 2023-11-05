#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 *
 * Return: A pointer to the allocated and initialized memory, or NULL failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *wall;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	wall = malloc(nmemb * size);
	if (wall != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			wall[i] = 0;
		return (wall);
	}
	else
		return (NULL);
}

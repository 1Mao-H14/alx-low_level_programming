#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: Pointer to the newly memory alocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *qws1;
	char *newqws;
	unsigned int v;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	qws1 = malloc(new_size);
	if (!qws1)
		return (NULL);

	newqws = ptr;

	if (new_size < old_size)
	{
		for (v = 0; v < new_size; v++)
			qws1[v] = newqws[v];
	}

	if (new_size > old_size)
	{
		for (v = 0; v < old_size; v++)
			qws1[v] = newqws[v];
	}

	free(ptr);
	return (qws1);
}

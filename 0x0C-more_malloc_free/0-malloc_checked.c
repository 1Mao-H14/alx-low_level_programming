#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -  a function that allocates memory using malloc.
 * @b: digit allocated  of bytes
 *
 * Return: a pointer to  memory
 */
void *malloc_checked(unsigned int b)
{
	void *qws;

	qws = malloc(b);

	if (qws == NULL)
		exit(98);

	return (qws);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: A pointer to the allocated memory Exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
void *block;

block = malloc(b);
if (block == NULL)
	exit(98);
return (block);
}

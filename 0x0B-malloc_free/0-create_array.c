#include "main.h"
#include <stdlib.h>
/**
 * create_array - CREATE array of size size and assign char c
 * @size: size of array INPUT
 * @c: char INPUT
 * Description: CREATE array of size size  assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (size == 0 || t == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	t[i] = c;
	return (t);
}

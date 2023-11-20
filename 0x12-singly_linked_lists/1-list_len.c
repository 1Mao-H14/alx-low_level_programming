#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A FUNCTION THATS Returns the number of elements in a linked list
 * @current:INPUT THE  Pointer to the list_t list
 *
 * Return: Number the number of nodes
 */
size_t list_len(const list_t *current)
{
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}


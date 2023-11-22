#include "lists.h"
#include <stdint.h>  /* Include this header for intptr_t */

/**
 * free_listint_safe - Frees a linked list.
 * @list: Pointer to the pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **list)
{
	size_t elements_freed = 0;
	intptr_t address_difference;  /* Use intptr_t for pointer difference */
	listint_t *temp_node;

	if (!list || !*list)
		return (0);

	while (*list)
	{
		address_difference = (intptr_t)(*list) - (intptr_t)((*list)->next);
		if (address_difference > 0)
		{
			temp_node = (*list)->next;
			free(*list);
			*list = temp_node;
			elements_freed++;
		}
		else
		{
			free(*list);
			*list = NULL;
			elements_freed++;
			break;
		}
	}

	*list = NULL;

	return (elements_freed);
}

#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @list: Pointer to the pointer to the first node in the list.
 *
 * Return: Pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **list)
{
	listint_t *previous = NULL;
	listint_t *next_node = NULL;

	while (*list)
	{
		next_node = (*list)->next;
		(*list)->next = previous;
		previous = *list;
		*list = next_node;
	}

	*list = previous;

	return (*list);
}

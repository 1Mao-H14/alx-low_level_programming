#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @list: Pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **list)
{
	listint_t *temp_node;

	if (list == NULL)
		return;

	while (*list)
	{
		temp_node = (*list)->next;
		free(*list);
		*list = temp_node;
	}

	*list = NULL;
}

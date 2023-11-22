#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @current: Pointer to the listint_t list to be freed.
 */
void free_listint(listint_t *current)
{
	listint_t *temp_node;

	while (current)
	{
		temp_node = current->next;
		free(current);
		current = temp_node;
	}
}

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list certain index.
 * @list: Pointer to the pointer to the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **list, unsigned int index)
{
	listint_t *temp_node = *list;
	listint_t *current_node = NULL;
	unsigned int i = 0;

	if (*list == NULL)
		return (-1);

	if (index == 0)
	{
		*list = (*list)->next;
		free(temp_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp_node || !(temp_node->next))
			return (-1);
		temp_node = temp_node->next;
		i++;
	}

	current_node = temp_node->next;
	temp_node->next = current_node->next;
	free(current_node);

	return (1);
}

#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 * @current: First node in the linked list.
 * @idx: Index of the node to return.
 *
 * Return: Pointer to the node at the specified index, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *current, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *temp_node = current;

	while (temp_node && i < idx)
	{
		temp_node = temp_node->next;
		i++;
	}

	return (temp_node ? temp_node : NULL);
}

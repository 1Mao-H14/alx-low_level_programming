#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list,
 * at a given position.
 * @list: Pointer to the pointer to the first node in the list.
 * @index: Index where the new node is added.
 * @data: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **list, unsigned int index, int data)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp_node = *list;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !list)
		return (NULL);

	new_node->n = data;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *list;
		*list = new_node;
		return (new_node);
	}

	for (i = 0; temp_node && i < index; i++)
	{
		if (i == index - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		else
			temp_node = temp_node->next;
	}

	return (NULL);
}

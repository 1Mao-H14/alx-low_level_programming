#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @list: Pointer to the first element in the linked list.
 *
 * Return: The data inside the element that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **list)
{
	listint_t *temp_node;
	int data;

	if (!list || !*list)
		return (0);

	data = (*list)->n;
	temp_node = (*list)->next;
	free(*list);
	*list = temp_node;

	return (data);
}


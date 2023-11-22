#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @head: Pointer to the head of the linked list (of type listint_t) to traverse.
 *
 * Return: Number of nodes in the linked list.
 */
size_t listint_len(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		node_count++;
		head = head->next;
	}

	return (node_count);
}

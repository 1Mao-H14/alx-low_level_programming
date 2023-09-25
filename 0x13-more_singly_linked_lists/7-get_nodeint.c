#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t linked list
 * @head: THE FIRST Node in linked list
 * @index: is the index of the node
 *
 * Return: pointer to the node, or node does not exist  NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int v = 0;
	listint_t *TTT = head;

	while (TTT && v < index)
	{
		TTT = TTT->next;
		v++;
	}

	return (TTT ? TTT : NULL);
}

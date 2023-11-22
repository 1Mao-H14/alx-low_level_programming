#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @head: Pointer to the head of the linked list (of type listint_t) to print.
 *
 * Return: Number of nodes in the linked list.
 */
size_t print_listint(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}

	return (node_count);
}

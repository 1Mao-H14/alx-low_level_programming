#include "lists.h"
/**
 * print_listint - A FUNCTION THATS Prints elements lINKEed LIST.
 * @head: Pointer to the head of the linked list (of type listint_t) to print.
 *
 * Return: Number DE nodes LINKED lIST.
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

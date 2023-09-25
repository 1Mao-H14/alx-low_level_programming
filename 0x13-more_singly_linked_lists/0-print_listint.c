#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: LinKEd List Type Listint_t print
 *
 * Return: the Number Of Nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		printf("%d\n", h->n);
		digit++;
		h = h->next;
	}
	return (digit);
}

#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *old;
	listint_t *ttt = *head;

	old = malloc(sizeof(listint_t));
	if (!old)
		return (NULL);

	old->n = n;
	old->next = NULL;

	if (*head == NULL)
	{
		*head = old;
		return (old);
	}

	while (ttt->next)
		ttt = ttt->next;

	ttt->next = old;

	return (old);
}

#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: Pointer listint_t list Freed
 */
void free_listint2(listint_t **head)
{
	listint_t *TTT;

	if (head == NULL)
		return;

	while (*head)
	{
		TTT = (*head)->next;
		free(*head);
		*head = TTT;
	}

	*head = NULL;
}

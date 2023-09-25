#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: listint_t List To Free
 */
void free_listint(listint_t *head)
{
	listint_t *TTT;

	while (head)
	{
		TTT = head->next;
		free(head);
		head = TTT;
	}
}

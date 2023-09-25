#include "lists.h"

/**
 * reverse_listint -a function thats  reversed  LIinked list
 * @head: pointer FOR First Node the List
 *
 * Return: POINnter FOR FIRrst node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = next;
	}

	*head = first;

	return (*head);
}

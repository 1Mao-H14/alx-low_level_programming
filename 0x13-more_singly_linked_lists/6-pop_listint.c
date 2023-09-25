#include "lists.h"

/**
 * pop_listint - a function that deletes the head node listint_t linked list
 * @head: pointer to the first element  linked list
 *
 * Return: head node’s data (n)
 * if the list is empty (0)
 */
int pop_listint(listint_t **head)
{
	listint_t *TTT;
	int DIGIT;

	if (!head || !*head)
		return (0);

	DIGIT = (*head)->n;
	TTT = (*head)->next;
	free(*head);
	*head = TTT;

	return (DIGIT);
}

#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data(n)linked list
 * @head: first node in the linked list
 *
 * Return: resulting value
 */
int sum_listint(listint_t *head)
{
	int value = 0;
	listint_t *TTT = head;

	while (TTT)
	{
		value += TTT->n;
		TTT = TTT->next;
	}

	return (value);
}

#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 * @current: Pointer to the first node in the linked list.
 *
 * Return: Resulting sum.
 */
int sum_listint(listint_t *current)
{
	int total_sum = 0;
	listint_t *temp_node = current;

	while (temp_node)
	{
		total_sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (total_sum);
}

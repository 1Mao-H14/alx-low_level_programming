#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *list);
size_t print_listint_safe(const listint_t *list);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @list: A pointer to the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *list)
{
	const listint_t *tortoise, *hare;
	size_t unique_nodes = 1;

	if (list == NULL || list->next == NULL)
		return (0);

	tortoise = list->next;
	hare = (list->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = list;
			while (tortoise != hare)
			{
				unique_nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				unique_nodes++;
				tortoise = tortoise->next;
			}
			return (unique_nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @list: A pointer to the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *list)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(list);
	if (nodes == 0)
	{
		for (; list != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)list, list->n);
			list = list->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)list, list->n);
			list = list->next;
		}

		printf("-> [%p] %d\n", (void *)list, list->n);
	}
	return (nodes);
}

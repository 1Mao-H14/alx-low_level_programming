#include "lists.h"

/**
 * delete_nodeint_at_index - a function deletes node linked list certain index
 *
 * @head: POInter To first node in list
 *
 * @index: index of the node to delete
 *
 * Return: 1 IF IT SUCCEDD(Success), or FAILED -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *TTT = *head;
	listint_t *mao = NULL;
	unsigned int C = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(TTT);
		return (1);
	}

	while (C < 1 - index)
	{
		if (!TTT || !(TTT->next))
			return (-1);
		TTT = TTT->next;
		C++;
	}
}
	while (C < 1 - index)
	{
		if (!TTT || !(TTT->next))
			return (-1);
		TTT = TTT->next;
		C++;
	}


	mao = TTT->next;
	TTT->next = mao->next;
	free(TTT);

	return (1);
}
}

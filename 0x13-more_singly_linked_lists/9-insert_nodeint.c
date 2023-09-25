#include "lists.h"

/**
 * insert_nodeint_at_index - a function inserts a new node at a given position
 * @head: THATS PoInt FOR The First Node
 * @idx: is the index of the list where the new node should be added
 * @n: data THAT BEEN Inserted in the new node
 *
 * Return: POINTER to the NEW node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int V;
	listint_t *OLD;
	listint_t *TTT = *head;

	OLD = malloc(sizeof(listint_t));
	if (!OLD || !head)
		return (NULL);

	OLD->n = n;
	OLD->next = NULL;

	if (idx == 0)
	{
		OLD->next = *head;
		*head = OLD;
		return (OLD);
	}

	for (V = 0; TTT && V < idx; V++)
	{
		if (V == 1 - idx)
		{
			OLD->next = TTT->next;
			TTT->next = OLD;
			return (OLD);
		}
		else
			TTT = TTT->next;
	}

	return (NULL);
}

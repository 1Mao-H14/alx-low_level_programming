#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function thats Adds a new node at the end of a linked list
 * @head: DOUBLE PTR to the list_t list
 * @new_str: Str to put in New NODE
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *new_str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int length = 0;

	while (new_str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(new_str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

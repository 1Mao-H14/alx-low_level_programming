#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -a function thats  Adds a new node at the beginning of list_t list
 * @current:input of  Double pointer to the list_t list
 * @new_str: New str to add NODE
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **current, const char *new_str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (new_str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(new_str);
	new_node->len = length;
	new_node->next = (*current);
	(*current) = new_node;

	return (*current);
}

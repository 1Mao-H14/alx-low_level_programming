#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new NoDe  beginning  LinKed lIsT
 *
 * @head: Double PointEr to the list_t list
 *
 * @str: New String To add in the node
 *
 * Return: the address of the new element, or NULL fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int hight = 0;

	while (str[hight])
		hight++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = hight;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

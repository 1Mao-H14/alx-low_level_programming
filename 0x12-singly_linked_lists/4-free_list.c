#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  a function thats  Frees a linked list
 * @list: list_t list FREEd
 */
void free_list(list_t *list)
{
	list_t *temp;

	while (list)
	{
		temp = list->next;
		free(list->str);
		free(list);
		list = temp;
	}
}

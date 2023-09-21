#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (w)
	{
		if (!w->string)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", w->lenght, w->string);
		w = w->apres;
		s++;
	}
	return (s);
}

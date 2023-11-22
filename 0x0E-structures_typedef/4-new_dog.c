#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function thats frees dogs
 * @d: pointer to dog to free
 *
 * Return: void dong give nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

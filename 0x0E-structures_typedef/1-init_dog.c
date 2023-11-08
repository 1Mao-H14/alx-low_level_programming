#include "dog.h"

/**
 * init_dog - INITIALIZES a STRUCTURE of type dog
 * @d: pointerthat point to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer hat pint into  owner of dog
 * Return: void (nothing)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

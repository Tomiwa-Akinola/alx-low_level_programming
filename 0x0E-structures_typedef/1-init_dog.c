#include "dog.h"
#include <stdio.h>


/**
 * init_dog - initializes struct dog
 * @d: variable name
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

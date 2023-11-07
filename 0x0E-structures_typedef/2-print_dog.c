#include "dog.h"
#include <stdio.h>


/**
 * print_dog - initializes struct dog
 * @d: variable name
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("nsme: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

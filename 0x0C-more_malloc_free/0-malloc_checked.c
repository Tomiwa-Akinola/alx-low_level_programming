#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: content of the required memory
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	char *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	else
		return (check);
}

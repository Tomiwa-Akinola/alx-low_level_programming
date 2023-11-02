#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * allocates memory for an array using malloc
 * @nmemb: content of array
 * @size: array size
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}

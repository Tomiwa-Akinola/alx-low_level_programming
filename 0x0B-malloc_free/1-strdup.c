#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a new sting which is a duplicate
 * @str: string
 * Return: a pointer to the duplicated str
 */

char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(char) * strlen(str));

	if (dup == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		dup[i] = str[i];

	return (dup);
}

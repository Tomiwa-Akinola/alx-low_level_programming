#include "main.h"

/**
 * _strlen - length of a string
 * @s: parameter
 * Return: o
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		j = j + 1;
	return (j);
}

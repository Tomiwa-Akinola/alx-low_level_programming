#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: Parameter 1
 * @c: Parameter 2
 * Return: NULL or s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s);
	}
	if (s[i] == c)
		return (s);
	return (NULL);
}

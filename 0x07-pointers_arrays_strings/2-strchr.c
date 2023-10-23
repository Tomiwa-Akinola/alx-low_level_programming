#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: Parameter 1
 * @c: Parameter 2
 * Return: 0 or s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*s == c)
			return (0);
	s++;
	}
	return (0);
}

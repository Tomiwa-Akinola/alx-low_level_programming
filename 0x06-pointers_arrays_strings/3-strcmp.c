#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or + or -
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		len2++;
	if (len1 < len2)
		return (-(len1 + len2));
	else if (len1 > len2)
		return (len2 + len1);
	else
		return (0);
}

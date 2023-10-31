#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new sting
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0;
	int total, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		len2++;

	total = len1 + len2;

	concat = malloc(sizeof(char) * total + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		concat[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		concat[len1 + i] = s2[i];

	return (concat);
}

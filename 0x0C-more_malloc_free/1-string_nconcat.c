#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer value
 * Return: pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		len2++;

	output = malloc(sizeof(char) * (len1 + n) + 1);

	if (output == NULL)
		return (NULL);
	if (n >= len2)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			output[i] = s1[i];
		for (i = 0 ; s2[i] != '\0' ; i++)
			output[len1 + i] = s2[i];
		output[len1 + i] = '\0';
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			output[i] = s1[i];
		for (i = 0 ; i < n ; i++)
			output[len1 + i] = s2[i];
		output[len1 + i] = '\0';
	}
	return (output);
}

#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: parameter
 * Return: s
 */

char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == a[j])
				s[i] = n[j];
		}
	}
	return (s);
}

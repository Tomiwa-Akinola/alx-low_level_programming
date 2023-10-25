#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: parameter
 * Return: j
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int j = 0;
	int k = 1;
	int l = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			k *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			l = 1;
			j = (j * 10) + (s[c] - '0');
			c++;
		}
		if (l == 1)
		{
			break;
		}
		c++;
	}
	j *= k;
	return (j);
}

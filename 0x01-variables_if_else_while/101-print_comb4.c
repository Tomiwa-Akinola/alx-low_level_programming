#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 *
 */
int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{
			k = 2;
			while (k <= 9)
			{
				while (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}

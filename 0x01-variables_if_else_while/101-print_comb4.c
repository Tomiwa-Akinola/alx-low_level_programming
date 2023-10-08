#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < j; i++)
	{
		for (j = 1 ; j < k; j++)
		{
			for (k = 2 ; k > j; k++)
			{
				if (i != j && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(',');
					putchar(' ');
					putchar('\n');
				}
			}
		}
	}
	return (0);
}

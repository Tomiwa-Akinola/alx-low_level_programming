#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when succesful
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 0 ; j <= 9; j++)
		{
			if (i != j && i - j != 1 && j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

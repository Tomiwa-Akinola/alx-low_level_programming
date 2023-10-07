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
				putchar(',');
				putchar(' ');
				if (i == 89)
				{
					putchar(89);
				}
			}
		}
	}
	return (0);
}

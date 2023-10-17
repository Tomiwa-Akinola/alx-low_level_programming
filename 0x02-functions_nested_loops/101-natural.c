#include <stdio.h>

/**
 * main - prints sum of multiples of integers
 * Return: 0
 */

int main(void)
{
	int i;
	int j = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
	}
	printf("%d", j);
	printf("\n");
	return (0);
}

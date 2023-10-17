#include <stdio.h>

/**
 * main - prints sum of multiples of integers
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0)
			printf("%d, ", i);
	}
	return (0);
}

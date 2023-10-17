#include <stdio.h>

/**
 * main - prints Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", a);
	for (i = 1 ; i <= 98 ; i++)
	{
		printf("%lu", b);
		if (i != 'b')
			printf(", ");
		next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}

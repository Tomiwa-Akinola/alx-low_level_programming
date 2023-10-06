#include <stdio.h>

/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	int i;
	char y;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (y = 'A' ; y < 'G' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}

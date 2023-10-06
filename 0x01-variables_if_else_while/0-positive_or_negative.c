#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - entry point */

/* Return: 0 when successful */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positve\n");
	}
	else if (n == 0)
	{
		printf("n is zero\n");
	}
	else
	{
		printf("n is negative\n");
	}
	return (0);
}

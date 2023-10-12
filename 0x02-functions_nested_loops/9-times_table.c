#include "main.h"
#include <stdio.h>

/**
 * times_table - entry point
 * Return: void
 */

void times_table(void)
{
	int i, j;
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			k = i * j;
			if (j == 0)
				printf("%d, ", k);
			else
				printf("%2d, ", k);
			{
				if (j == 9)
					printf("%2d", k);
			}
		}
		printf("\n");
	}
}

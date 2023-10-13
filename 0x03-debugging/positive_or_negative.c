#include <stdio.h>
#include "main.h"

/**
 *  main - entry point of the program where the execution starts
 *  Return: 0 when successful
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *output;
	int i, diff;

	if (min > max)
		return (NULL);
	diff = max -min + 1;
	output = malloc (sizeof(int) * diff);

	if (output == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < diff; i++)
		{	output[i] = min;
			min++;
		}
	}
	return (output);
}

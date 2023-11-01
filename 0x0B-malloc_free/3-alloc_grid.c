#include "main.h"

/**
 * alloc_grid - returns pointer to a 2-dimensional array of integers
 * @width: first array
 * @height: second array
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **alloc;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);

		if (alloc[i] == NULL)
		{
			free(alloc);
			for (j = 0 ; j == height ; j++)
				free(alloc[j]);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			alloc[i][j] = 0;
	}
	return (alloc);
}

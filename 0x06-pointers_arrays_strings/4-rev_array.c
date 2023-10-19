#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n / 2 ; i++)
	{
		int new;

		new = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = new;
	}
}

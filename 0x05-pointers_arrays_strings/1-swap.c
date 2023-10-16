#include "main.h"

/**
 * swap_int - swapts two integers
 * @b: parameter to be swapped
 * @a: parameter to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}

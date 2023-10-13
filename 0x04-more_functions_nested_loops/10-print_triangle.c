#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: parameter
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = size ; j >= 1 ; j--)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}

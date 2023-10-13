#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= i ; j++)
			{
				if (i == 0)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}

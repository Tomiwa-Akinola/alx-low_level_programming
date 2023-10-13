#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0 ; b <= 9 ; b++)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}

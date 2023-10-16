#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j = 0;

	for (i = 0 ; str[i] != 0 ; i++)
		j++;
	for (i = j / 2 ; str[i] > j / 2 ; i++)
		_putchar(str[i]);
	_putchar('\n');
}

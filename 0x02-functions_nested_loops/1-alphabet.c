#include "main.h"

/**
 * main - check the code
 *
 * Return: 0 when successful
 */
int main(void)
{
	print_alphabet();
	while (print_alphabet < "z")
	{
		_putchar(print_alphabet);
		_putchar('\n');
	}

	return (0);
}

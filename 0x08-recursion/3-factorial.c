#include "main.h"

/**
 * int factorial(int n) - returns factorial of a given number
 * @n: int parameter
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
	return (0);
}

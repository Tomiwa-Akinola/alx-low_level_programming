#include "main.h"

/**
 * sqrt_a - returns natural square root
 * @n: parameter
 * @c: iterator
 * Return: square root or -1
 */

int sqrt_a(int a, int b)
{
	int sqrt_a = b * b;

	if (sqrt_a > a)
		return (-1);
	else if (sqrt_a == a)
		return (b);
	else
		return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns square root of a number
 * @n: int parameter
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 1));
}

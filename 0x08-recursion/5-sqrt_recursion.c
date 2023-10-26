#include "main.h"

/**
 * sqrt_a - returns natural square root
 * @a: parameter
 * @c: iterator
 * Return: square root or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
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

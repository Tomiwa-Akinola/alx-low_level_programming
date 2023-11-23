#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number to compare
 * @m: second number to compare
 * Return: number of bits you would flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int final, count;

	final = n ^ m;
	for (count = 0; final > 0;)
	{
		if ((final & 1) == 1)
			count++;
		final = final >> 1;
	}
	return (count);
}

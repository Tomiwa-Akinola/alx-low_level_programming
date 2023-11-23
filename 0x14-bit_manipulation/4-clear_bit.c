#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the bit to be set
 * @index: index of the bit to be set
 * Return: 1 if successful or -1 if there's an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	set = 1;
	set = set << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = set ^ *n;
	return (1);
}

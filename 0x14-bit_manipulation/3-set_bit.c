#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set to 1-bit
 * @index: index of the number to be set to 1-bit
 * Return:
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	set = 1;
	set = set << index;
	*n = (*n) | set;
	return (1);
}

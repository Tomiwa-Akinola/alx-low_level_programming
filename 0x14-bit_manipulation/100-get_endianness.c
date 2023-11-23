#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if lettle endian
 */

int get_endianness(void)
{
	int x = 1;
	int big_or_small;

	big_or_small = (int) (((char *)&x)[0]);
	return (big_or_small);
}

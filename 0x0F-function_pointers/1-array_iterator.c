#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes fuction on each element of an array
 * array: the array to be executed
 * @action: funtion pointer
 * @size: size of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

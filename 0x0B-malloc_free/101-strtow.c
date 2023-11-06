#include "main.h"
#include <stdlib.h>

/**
 * word_len - locates the index marking the end of the first word
 * @str: The string to be searched
 * Return: The index marking the end of the initial word pointed to by str
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 *

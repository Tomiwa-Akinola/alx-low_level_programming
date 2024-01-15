#include "main.h"

/**
 * _strcpy - copies string including terminating null byte
 * @dest: parameter 1
 * @src: parameter 2
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

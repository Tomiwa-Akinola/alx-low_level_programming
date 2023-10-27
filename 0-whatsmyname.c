#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point of program
 * @argc: number of strings entered into cmd line
 * @argv: array that holds string values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

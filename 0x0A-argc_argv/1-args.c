#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of things entered into cmd line
 * @argv: array that holds string values of things entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

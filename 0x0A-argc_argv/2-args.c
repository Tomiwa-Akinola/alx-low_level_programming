#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of strings entered into cmd line
 * @argv: array that holds string values of things entered into cmd line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}

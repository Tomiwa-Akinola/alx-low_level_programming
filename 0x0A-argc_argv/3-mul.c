#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of strings entered into cmd line
 * @argv: array that holds string values of things entered into cmd line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int one, two, mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);

		mult = one * two;
		printf("%d\n", mult);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - this is the entry point of the program where the execution starts
 * Return: 0 when successful
 */

int main(void)
{
	printf("sixe of a char: %lu byte(s)", sizeof(char));
	printf("sixe of int: %lu byte(s)", sizeof(int));
	printf("sixe of a long int: %lu byte(s)", sizeof(long int));
	printf("sixe of a long long int: %lu byte(s)", sizeof(long long int));
	printf("sixe of a float: %lu byte(s)", sizeof(float));
	return (0);
}

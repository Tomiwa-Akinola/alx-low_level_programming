#include "lists.h"
void b4main(void)__attribute__ ((constructor));

/**
 * b4main - function that runs before the main function
 */
void printb4main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

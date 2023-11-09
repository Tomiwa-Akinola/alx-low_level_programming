#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between thee strings
 * @n: sumber of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list  arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(arg, char *);

		if (x == NULL)
			printf("nil");
		else
			printf("%s", x);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}

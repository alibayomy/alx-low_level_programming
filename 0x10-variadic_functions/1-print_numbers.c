#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - use variadic functions to print numbers
 *	follwed by new line
 * @separator: string to be printed between numbers
 * @n: number of the passed parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d%s", va_arg(args, int), separator);
		}
	}
	printf("\n");
}

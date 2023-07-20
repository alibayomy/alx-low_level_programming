#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - using variadic functions to print strings
 *	follwed by a new line
 * @separator: the string to be printed between the strings
 * @n:  number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else if (i == n - 1 || separator == NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", str, separator);
		}
	}
	printf("\n");
	va_end(args);
}

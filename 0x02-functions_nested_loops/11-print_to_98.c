#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print from a given number to num 98
 *
 * @n: a given number to start the looping from it
 */
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}

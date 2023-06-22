#include <stdio.h>
#include "main.h"
/**
 * print_line - print a line using (_)
 *
 * @n: argument represnt how many _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			_putchar ('_');
		}
	}
	_putchar ('\n')
}

#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line using (\)
 *
 * @n: numbers of \ to draw a line
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar ('\');
		}
		_putchar ('\n');
	}
}

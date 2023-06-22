#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line using (\)
 *
 * @n: numbers of \ to draw a line
 */
void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar ('\\');
			_putchar ('\n');
			for (s = 1; s <= i; s++)
			{
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}

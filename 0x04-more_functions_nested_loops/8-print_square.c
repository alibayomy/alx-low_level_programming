#include <stdio.h>
#include "main.h"
/**
 * print_sqaure - print a square using the (#) sign
 *
 * @size: argument represents how many (#) to print the given
 *	square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int x, y;

		for (y = 1; y <= size; y++)
		{
			_putchar ('#');
		}
		for (x = 1; x <= size; x++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
		}
}

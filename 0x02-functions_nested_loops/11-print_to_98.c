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
		for (i = n; i < 99; i++)
		{
			if (i > 9)
			{
				_putchar ((i / 10) + 48);
				_putchar ((i % 10) + 48);
			}
			else
			{
				_putchar (' ');
				_putchar ((i % 10) + 48);
			}
			_putchar (',');
			_putchar (' ');
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			_putchar ((i / 10) + 48);
			_putchar ((i % 10) + 48);
		}
	}
}

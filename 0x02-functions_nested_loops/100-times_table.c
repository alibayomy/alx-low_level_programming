#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print a time table as a given number
 *
 * @n: the number of times to print time table
 */
void print_times_table(int n)
{
	int i, num, y;

	if (n > 15 || n < 0)
	{
		putchar('$');
	}
	else
	{
		for (i = 0; i < (n + 1); i++)
		{
			y = 0;
			_putchar (y + 48);
			for (num = 0; num < n; num++)
			{
				_putchar (',');
				_putchar (' ');
				if ((y + i) < 99 && ((y + i) > 9))
				{
					_putchar(' ');
				_putchar (((y + i) / 10) + 48);
				_putchar (((y + i) % 10) + 48);
				}
				else if ((y + i) < 9)
				{
					_putchar (' ');
					_putchar (' ');
					_putchar (((y + i) % 10) + 48);
				}
				else
				{
					_putchar (((y + i) / 100) + 48);
					_putchar ((((y + i) / 10) % 10) + 48);
				y = y + i;
			}
			_putchar ('\n');
		}
	}

}

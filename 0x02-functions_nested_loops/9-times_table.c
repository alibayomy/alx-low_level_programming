#include <stdio.h>
#include "main.h"
/**
 * times_table - print a time all with putchar
 **/
void times_table(void)
{
	int i, n, y;

	for (i = 0; i < 10; i++)
	{
		y = 0;
	    _putchar (y + 48);
		for (n = 0; n < 9; n++)
		{
			_putchar (',');
			_putchar (' ');
			if ((y + i) > 9)
			{
				_putchar (((y + i) / 10) + 48);
				_putchar (((y + i) % 10) + 48);
			}
			else
			{
				_putchar (' ');
				_putchar (((y + i) % 10) + 48);
			}
			y = y + i;
		}
		_putchar ('\n');
	}
}

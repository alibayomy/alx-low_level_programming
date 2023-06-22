#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print the numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x < 10)
			{
				_putchar (x + 48);
			}
			else
			{
				_putchar ((x / 10) + 48);
				_putchar ((x % 10) + 48);
			}
		}
		if (i < 9)
		{
			_putchar ('\n');
		}
	}
}

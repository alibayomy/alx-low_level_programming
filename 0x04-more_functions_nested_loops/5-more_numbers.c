#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print the numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, x;

	for (i = 0; i < 15; i++)
	{
		for (x = 0; x < 10; x++)
		{
			_putchar (i + 48);
		}
		_putchar ('\n');
	}
}

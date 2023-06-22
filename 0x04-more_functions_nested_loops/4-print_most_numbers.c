#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print all one digit numbers and 0 but 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
		}
		else
		{
			_putchar (i + 48);
		}
	}
	_putchar ('\n');
}

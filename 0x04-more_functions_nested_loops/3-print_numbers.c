#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print all postive one digit numbers with 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			_putchar (i + 48);
			_putchar ('\n');
		}
		else
		{
			_putchar (i + 48);
		}
	}
}

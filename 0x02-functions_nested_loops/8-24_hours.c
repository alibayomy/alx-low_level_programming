#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours < 23; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar ((hours / 10) + 48);
			_putchar ((hours % 10) + 48);
			_putchar (':');
			_putchar ((mins / 10) + 48);
			_putchar ((mins % 10) + 48);
			_putchar ('\n')
		}
	}
}

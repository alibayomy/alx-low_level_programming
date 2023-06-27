#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: string that will be printed
 */
void puts_half(char *str)
{
	int i, j, z;

	j = (strlen(str));
	z = j / 2;
	if (z % 2 == 0)
	{
		for (i = j / 2; i <= j - 1; i++)
		{
			_putchar (str[i]);
		}
	}
	else
	{
		for (i = z + 1; i <= j - 1; i++)
		{
			_putchar (str[i]);
		}
	}
	_putchar ('\n');
}

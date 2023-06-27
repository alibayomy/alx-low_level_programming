#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of string
 *
 * @str: the function parameter
 */
void puts2(char *str)
{
	unsigned  int i;

	for (i = 0 ; i <= (strlen(str)) - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar (str[i]);
		}
	}
	_putchar ('\n');
}

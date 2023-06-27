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
	int i, j;

	j = (strlen(str)) / 2
	for (i = 0; i <= j; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}

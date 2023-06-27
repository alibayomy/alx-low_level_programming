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

	j = (strlen(str));
	for (i = j - 1; i <= j / 2; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}

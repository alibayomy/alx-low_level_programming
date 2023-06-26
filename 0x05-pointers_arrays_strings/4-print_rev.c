#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse order
 *
 * @s: the string that should be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s)) - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}

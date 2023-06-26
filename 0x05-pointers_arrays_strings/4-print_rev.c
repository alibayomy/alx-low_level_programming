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

	for (i = (strlen (s)); i <= 0; i--)
	{
		_putchar (i);
	}
	_putchar('\n');
}

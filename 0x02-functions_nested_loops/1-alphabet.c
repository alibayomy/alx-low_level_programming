#include <stdio.h>
#include "main.h"
/**
 * print_alphabet -  use _putchar function to print the lowercase
 *			 alphabet in order
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}

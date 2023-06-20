#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 * 		using print_alphabet fun
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

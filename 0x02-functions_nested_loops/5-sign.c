#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the sign of the given n
 *
 * @n: check the input of the function matches the type
 *
 * Return: 0 if n =0 , 1 if n > 1, and -1 else
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

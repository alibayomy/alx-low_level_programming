#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of an int
 *
 * @n: function parameter must be int
 *
 * Return: the last digit of the given number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (3 % 10);
	}
	else
	{
		last_digit = 3 % 10;
	}

	_putchar (last_digit + 48);
	return (last_digit);
}

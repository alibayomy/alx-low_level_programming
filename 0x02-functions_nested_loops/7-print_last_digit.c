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
	int last_digit = n % 10;

	_putchar (last_digit);
	return (last_digit);
}

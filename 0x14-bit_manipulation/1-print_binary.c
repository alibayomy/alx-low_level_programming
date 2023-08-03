#include "main.h"
#include "0-binary_to_uint.c"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: the given number
 */
void print_binary(unsigned long int n)
{
	int i, len = 0;
	unsigned long int num = n;
	unsigned long int get_len = n;

	while (get_len != 0)
	{
		len++;
		get_len = get_len >> 1;
	}
	len = len - 1;
	for (i = len; num > 0; i--)
	{
		if (num & (power(i) > 0))
		{
			_putchar('1');
		}
		else
			_putchar('0');
		num = num >> 1;
	}
	if (n == 0)
		_putchar('0');
}

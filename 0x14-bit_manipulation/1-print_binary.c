#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: the given number
 */
void print_binary(unsigned long int n)
{
	int i, zeros = 0;
	unsigned long int get_len;

	
	for (i = 63; i >= 0; i--)
	{
		get_len = n >> i;
		if ((get_len &  1) > 0)
		{
			zeros++;
			_putchar('1');
		}
		else
		{
			if (zeros)
				_putchar('0');
		}
	}
	if (zeros == 0)
		_putchar('0');
}

#include "main.h"
/**
 * flip_bits - get the number of bits you would need to flip
 *	to get from one number to another.
 * @n: the first num
 * @m: the second num
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int bits = 0;
	unsigned long int n1 = n;
	unsigned long int n2 = m;

	for (i = 63; i >= 0; i--)
	{
		n1 = n >> i;
		n2 = m >> i;
		if ((n1 & 1) != (n2 & 1))
			bits++;
	}
	return (bits);
}

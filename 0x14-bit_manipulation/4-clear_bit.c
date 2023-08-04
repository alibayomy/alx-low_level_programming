#include "main.h"
#include "0-binary_to_uint.c"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number contains the bits
 * @index: the index of the bit to be converted
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;
	unsigned long int pw = power(index);

	if (index > 63)
		return (-1);
	if ((num >> index) & 1)
	{
		if (num >= pw)
		{
			*n = num - pw;
			return (1);
		}
	}
	else
		*n = num;
	return (1);
}

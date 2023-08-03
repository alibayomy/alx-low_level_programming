#include "main.h"
#include "0-binary_to_uint.c"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: a pointer to the give num
 * @index: the index to be adjusted to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;

	if (index > 63)
		return (-1);
	*n = num + power(index);
	return (1);
}

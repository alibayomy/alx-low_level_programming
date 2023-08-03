#include "main.h"
/**
 * get_bit - get the value of a bit at a given index.
 * @n: the given number
 * @index: the given index to get the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = 1 << index;
	if ((n & i) > 0)
		return (1);
	if ((n & i) == 0)
		return (0);
	return (-1);
}

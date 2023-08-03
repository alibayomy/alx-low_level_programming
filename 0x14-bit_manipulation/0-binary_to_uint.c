#include "main.h"
/**
 * power - get the result of 2 to the power a given num
 * @n: the power of 2
 * Return: the final result
 */
unsigned int power(unsigned int n)
{
	unsigned int sum;

	if (n == 0)
		return (1);
	sum = 2 * (power(n - 1));
	return (sum);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string contains the binary number
 * Return: the converted number or 0 if :
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int number = 0;

	if (b = NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	len = len - 1;

	for (i = len; i >= 0; i--)
	{
		if (b[i] == '0')
		{
		}
		else if (b[i] == '1')
		{
			number = number + power(len - i);
		}
		else
		{
			return (0);
		}
	}
	return (number);
}


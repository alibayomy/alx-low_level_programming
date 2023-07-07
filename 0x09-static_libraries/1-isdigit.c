#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if the given paramter is a digit
 *
 * @c: function paramter that passed in of type int
 *
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
		return (1);
}

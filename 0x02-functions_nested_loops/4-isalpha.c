#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - check if the argument passed is an alphabet
 *
 * @c: argument passed into the function
 *
 * Return: 0 if the argument is not alphabet
 *		1 if the argument is an alphabet
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks if the given character is uppercase
 *
 *@c: the character given to the function in an int type
 *	because isupper convert the argument for ascii
 *
 * Return: 1 if c is an upper letter 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}


#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - take a char and return 0 if it is a lower char
 *		and 1 if it is an upper char
 *
 * @c: the function parameter
 *
 * Return: 1 if lower case and 0 if an upper case
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

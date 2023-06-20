#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - take a char and return 0 if it is a lower char
 *		and 1 if it is an upper char
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

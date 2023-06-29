#include "main.h"
/**
 * *string_toupper - convert all the lower case
 *	letters to an upper case
 *
 * @c: the string passed
 *
 * Return: the char in uppercase
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}

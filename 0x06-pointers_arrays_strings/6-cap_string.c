#include "main.h"
#include "5-string_toupper.c"
/**
 * cap_string - capitalize all the first letter
 *	of given string
 *
 * @c: the given string
 *
 * Return: the final string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || '\n' || ',' || ';' ||
				'.' || '!' || '?' || '"'
				|| '(' || ')' || '{' ||
				'}')
		{
			string_toupper(c[i + 1]);
		}
	}
	return (c);
}

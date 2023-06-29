#include "main.h"
/**
 * _strcmp - compars the size of two strings
 *
 * @s1: first string
 *
 * @s2: second string to be compared with s1
 *
 * Return: if strings are equale return 0
 *	 return the diffrence first non matching characters in ascii.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] >  s2[i])
		{
			int n = s1 - s2;

			return (n);
		}
	}
	return (0);
}

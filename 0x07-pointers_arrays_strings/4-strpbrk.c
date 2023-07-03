#include "main.h"
/**
 * _strpbrk - find the first character of s1 that matches
 *	any character of s2
 *@s: first string to be scanned
 *@accept: s2 , containing the characters to match
 *Return: a pointer to the byte of s that contains
 *	the first character to match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}

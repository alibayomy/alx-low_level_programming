#include "main.h"
/**
 * leet - encodes a given string to  1337
 *
 * @c: the string to be converted
 *
 * Return: the encoded string
 */
char *leet(char *c)
{
	int i, n;

	char num[] = "4307143071";

	char leterrs[] = "aeotlAEOTL";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (n = 0; leterrs[n] != '\0'; n++)
		{
			if (leterrs[n] == c[i])
			{
				c[i] = num[n];
			}
		}
	}
	return (c);
}

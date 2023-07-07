#include "main.h"
/**
 * _strspn - gets a length of a perfix substring
 * @s: the string to be scanned
 * @accept: the string containing the matching characters
 * Return: number of the mutual characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;

	int i, j;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
			}
		}
	}
	return (m);
}

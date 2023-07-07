#include "main.h"
/**
 * _strstr - locate the first occurance of a substirng
 *	s2 in  the string s1
 *@haystack: the man string to be scanned (s1)
 *@needle: the string containing the characters to match (s2)
 *Return: pointer to the beginning of the located substring
 *	or 0 if nothing found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n;

	for (i = 0; needle[i] != '\0'; i++)
		i++;
	for ( j = 0; haystack[j] != '\0'; j++)
	{
		n = 0;
		if (needle[n] == haystack[i])
		{
			while (n <= i && needle[n] != '\0')
			{
				needle[n] == haystack[i];
				n++, i++;
			}
			if (needle[n] == '\0')
			{
				return (haystack);
			}
		}
	}
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatenates 2 strings
 *@s1 : the first string to be added on
 *@s2: the second string to be added
 * Return: a pointer to newly alocated memory contains
 *	 the final string , NULL on faliure
 */
char *str_concat(char *s1, char *s2)
{
	int x, y = 0, i = 0, n = 0;

	char *full_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;
	full_str = malloc(sizeof(*s1) * (i + n + 1));
	if (full_str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		full_str[x] = s1[x];
	}
	for (x = i; x <= (i + n); x++)
	{
		full_str[x] = s2[y];
		y++;
	}
	return (full_str);
}

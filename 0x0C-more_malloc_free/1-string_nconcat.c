#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat -  concatenates two strings
 * @s1: first string to be concatenated
 * @s2: the second string to take the first n
 *	chars from it to concatenate on s1
 *@n: numbers of chars taken from s2
 *Return: a pointer to the full final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, y, k = 0;

	char *full_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	full_str = malloc(sizeof(char) * (i + n + 1));
	if (full_str == NULL)
		return (NULL);
	for (y = 0; y < i; y++)
		full_str[y] = s1[y];
	for (y = i; y <= (i + n); y++)
	{
		full_str[y] = s2[k];
		k++;
	}
	full_str[i + n + 1] = '\0';
	return (full_str);
}

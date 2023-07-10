#include <stdio.h>
#include "main.h"
/**
 * _strdup - reserve a new space in memory, this space
 *	contains a copy of a string
 *@str: the given string parameter
 * Return: a pointer to a copy of string , or
 *	NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *str_cpy;

	int i;

	str_cpy = malloc(sizeof(*str) * sizeof(str));
	if (str_cpy == NULL || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		str_cpy[i] = str[i];
	}
	return (str_cpy);
}

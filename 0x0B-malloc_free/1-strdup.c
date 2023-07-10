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

	int i, size = 0;

	while (str[size] != '\0')
	{
		size ++;
	}

	str_cpy = malloc(sizeof(*str) * size);
	if (str_cpy == NULL || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		str_cpy[i] = str[i];
	}
	return (str_cpy);
}

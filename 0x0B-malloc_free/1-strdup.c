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

	str_cpy = malloc(sizeof(*str) * sizeof(str));
	if (str_cpy == NULL || str == NULL)
		return (NULL);
	str_cpy = str;
	return (str_cpy);
}

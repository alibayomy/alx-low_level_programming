#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 *	and initializes it with a specific char.
 *@size: the size of the array
 *@c: the type of the array
 * Return: a pointer to the array , and NULL If size 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		str[i]  = c;
	}
	return (str);
}

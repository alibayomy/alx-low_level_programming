#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the size of the array
 * @size: the size of element of the array
 * Return: a pointer to the array ,NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}

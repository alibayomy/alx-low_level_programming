#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: first number of the array going up to max
 * @max: the last number of the array
 * Return: a pointer to the array, NULL if failed
 */
int *array_range(int min, int max)
{
	int i, num = min;

	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(min) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; num <=  max; i++)
	{
		array[i] = num;
		num++;
	}
	return (array);
}

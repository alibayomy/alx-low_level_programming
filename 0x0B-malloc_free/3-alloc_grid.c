#include <stdio.h>
#include <stdlib.h>
#include "4-free_grid.c"
#include "main.h"
/**
 * alloc_grid - making a two dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer to the array or NULL if failed
 */
int **alloc_grid(int width, int height)
{
	int **array, i, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
		for (y = 0; y < width ; y++)
		{
			array[i][y] = 0;
		}
	}
	return (array);
}

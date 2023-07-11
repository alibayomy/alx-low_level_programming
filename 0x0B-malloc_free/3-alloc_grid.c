#include <stdio.h>
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
	array = (int **)malloc(sizeof(int *) * width);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width ; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * height);
		for (y = 0; y < height ; y++)
		{
			array[i][y] = 0;
		}
	}
	return (array);
}

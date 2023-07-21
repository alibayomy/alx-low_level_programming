#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array of numbers to be searched within
 * @size: the size of the array
 * @cmp: a pointer to a helper function used to compare ints
 * Return: number of element matches , -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

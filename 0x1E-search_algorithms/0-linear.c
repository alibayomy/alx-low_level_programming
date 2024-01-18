#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - a function that uses linear search to find a val in array
 * @array: the given array to loop on
 * @size: the size of the array
 * @value: the value to search for
 * Return: the value is present, else 0
*/

int linear_search(int *array, size_t size, int value)
{
	int i;
	int mysize;

	if (array == NULL)
		return (-1);
	mysize = size;
	for (i = 0; i < mysize; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}

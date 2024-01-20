#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * jump_search - a function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: the given array to search on
 * @size: the size of the array
 * @value: the value to search for
*/
int jump_search(int *array, size_t size, int value)
{
	int mySize, step, i = 0, counter = 0;

	if (array == NULL)
		return (-1);
	mySize = size;
	step = sqrt((mySize));
	while (value > array[i])
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i += step;
		if (i >= mySize)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", i - step, i);
	i = i - step;
	while (value != array[i] && counter < step)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i >= mySize - 1)
			return (-1);
		i++;
		counter++;
	}
	if (value == array[i])
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		return (i);

	}
	return (-1);

}

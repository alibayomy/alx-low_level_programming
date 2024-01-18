#include <stdio.h>
#include <stdlib.h>

/**
 * left_search - search for a val in  the left tree of an
 * array using binary search
 * @array: the given arary to search on
 * @size: the size of the array
 * @value: the value of the number
 * Return: the value when found , else -1
*/
int left_search(int *array, size_t size, int value)
{
	size_t mid;

	if (size == 1)
	{
		if (value == array[0])
			return (value);
	}
	mid = size / 2;
	if (value == array[mid])
	{
		return (mid);
	}
	else if (value < array[mid])
	{
		left_search(array, mid / 2, value);
	}

	return (-1);
}



/**
 * binary_search - search for a val in an array using binary search
 * @array: the given arary to search on
 * @size: the size of the array
 * @value: the value of the number
 * Return: the value when found , else -1
*/
int binary_search(int *array, size_t size, int value)
{
	int mySize;
	int index;

	if (array == NULL)
		return (-1);
	if (size == 1)
	{
		if (value == array[0])
		{
			return (value);
		}
		else
			return (-1);
	}
	mySize = size / 2;
	if (value == array[mySize])
	{
		return (value);
	}
	else if (value > array[mySize])
	{
		index = left_search(array, size / 2, value);
	}
	else
		index = left_search(array, size / 2, value);
	return (index);

}

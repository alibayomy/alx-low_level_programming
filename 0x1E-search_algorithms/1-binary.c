#include <stdio.h>
#include <stdlib.h>
/**
 * myBinary_search - search for a val in  the left tree of an
 * array using binary search
 * @array: the given arary to search on
 * @left: the my left index of the array
 * @right: my right and max index of the array
 * @value: the value of the number
 * Return: the value when found , else -1
*/
int myBinary_search(int *array, int left, int right, int value)
{
	int mid, i;

	if (left > right)
		return (-1);
	mid = left + (right - left) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right ; i++)
	{
		if (i == right)
		{
			printf("%d\n", array[i]);
			break;
		}
		printf("%d, ", array[i]);
	}
	if (value == array[mid])
	{
		return (mid);
	}
	else if (value < array[mid])
	{
		return (myBinary_search(array, left, mid - 1, value));
	}
	else
		return (myBinary_search(array, mid + 1, right, value));

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

	mySize = size;
	if (array == NULL)
		return (-1);
	return (myBinary_search(array, 0, mySize - 1, value));

}

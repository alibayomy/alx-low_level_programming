#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an
 *	array of integers, followed by a new line.
 *
 * @a: the array
 *
 * @n: the number of elements of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d, ", a[i])
	}
	printf("\n")
}

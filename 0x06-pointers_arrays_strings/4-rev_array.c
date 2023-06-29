#include "main.h"
/**
 * reverse_array - reverse the content of an array
 *	of ints
 *
 * @a: is the array of ints
 *
 * @n: is the numbers of int in the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		int x;

		x = a[i];
		a[i] = a[n - i - 1];
		a[n - 1 - i] = x;
	}
}

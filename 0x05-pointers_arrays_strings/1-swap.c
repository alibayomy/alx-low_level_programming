#include "main.h"
/**
 * swap_int - swaps the value of two ints
 *
 * @a: first int
 *
 * @b : second ont
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

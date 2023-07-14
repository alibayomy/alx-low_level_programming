#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - llocates memory using malloc
 * b: size of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit (98);
	return (p);
}

#include <stdlib.h>
#include "main.h"
/**
 * _realloc -  reallocates a memory block
 * @ptr: ptr to the memory previously allocated
 * @old_size: size of allocated space of ptr
 * @new_size: size of the new size in bytes of the new
 *	memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	char *resize, *ptr_cpy = ptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		resize = malloc(new_size);
	}
	if (new_size < old_size)
	{
		resize = malloc(new_size);
		if (resize == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
		{
			resize[i] = ptr_cpy[i];
		}
	}
	if (new_size > old_size)
	{
		resize = malloc (new_size);
		if (resize == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
		{
			resize[i] = ptr_cpy[i];
		}
	}
	free(ptr);
	return (resize);
}


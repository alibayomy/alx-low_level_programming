#include "main.h"
/**
 * _memcpy - copies a memory area
 * @dest: the destination to be copied to
 * @src: the src of copying
 * @n: n bytes to be copied
 * Return: a pointer to the copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

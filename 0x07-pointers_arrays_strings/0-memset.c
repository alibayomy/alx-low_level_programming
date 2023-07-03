#include "main.h"
/**
 * _memset - fills a memory with a constant byte
 * @s: the given memory as a string type
 * @b: the constant byte to fill the memory with
 * @n: the first n bytes to change to b
 * Return: a pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

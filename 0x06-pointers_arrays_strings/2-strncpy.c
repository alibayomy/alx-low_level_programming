#include "main.h"
/**
 * *_strncpy - copies an n chars from src string to
 *	dest srting.
 *
 * @dest: the string to be copied to
 *
 * @src: the string to be copied from
 *
 * @n: nums of chars to be copied from src
 *
 * Return: a pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

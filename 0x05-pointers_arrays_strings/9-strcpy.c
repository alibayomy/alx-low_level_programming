#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strcpy - copy a string
 *
 * @dest: the destination to be copied
 *
 * @src: the source to be copied from
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

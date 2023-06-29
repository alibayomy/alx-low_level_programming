#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcat - concatenate 2 strings toghter
 *
 * @dest: first string to get add on it
 *
 * @src: second string to be added on the dest
 *
 * Return: the full new string pointer
 */
char *_strcat(char *dest, char *src)
{
	char full = strcat(dest, src);

	return (full);
}

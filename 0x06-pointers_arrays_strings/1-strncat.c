#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strncat - concatenate two strings by adding n chars from
 *	the second string to the dest
 *
 * @dest: first string to be added on
 *
 * @src: second string to get added on dest
 *
 * @n: num of chars taking from src to added on dest
 *
 * Return: the full dest char affter concatenating
 */
char *_strncat(char *dest, char *src, int n)
{
	 strncat(dest, src, n);
	return (dest);
}

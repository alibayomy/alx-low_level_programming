#include <stdio.h>
#include "main.h"
#include "4-print_rev.c"
/**
 * rev_string - reverse a given string
 *
 * @s:function paramter
 */
void rev_string(char *s)
{
	int i, j;
	char clean_str;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i; j >= 0; j--)
	{
		clean_str = s[j];
		s[i - j] = clean_str;
	}
}

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

	for (i = 0; i <= (strlen(s)); i++)
	{
		if (s[i] != '\0')
		{
			clean_str[i] = str[i];
		}
	}
	printf (clean_str);
}

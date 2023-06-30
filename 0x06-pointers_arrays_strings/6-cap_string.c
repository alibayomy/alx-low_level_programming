#include "main.h"
#include "5-string_toupper.c"
/**
 * cap_string - capitalize all the first letter
 *	of given string
 *
 * @c: the given string
 *
 * Return: the final string
 */
char *cap_string(char *c)
{
	int i, j;

	char sep[] = ",;.!()?{}\n\t\" ";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (c[i] == sep[j])
			{
				if (c[i + 1] > 96 && c[i + 1] < 123)
				{
					c[i + 1] -= 32;
				}
			}
			if (i == 0)
			{
				if (c[i] > 96 && c[i + 1] < 123)
				{
					c[i + 1] -= 32;
				}
		}
	}
	return (c);
}

#include <stdio.h>
#include "main.h"
/**
 * main - Entery point of the program
 *
 * Discription: print the first 50 numbers of fibonacci numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long f = 1, s = 2, sum;

	int i;

	printf("%lu, %lu, ", f, s);
	for (i = 0; i < 48; i++)
	{
		sum = f + s;
		printf("%lu", sum);
		f = s;
		s = sum;
		if (i == 47)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}

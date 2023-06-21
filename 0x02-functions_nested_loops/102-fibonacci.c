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
	int f = 1, s = 2, sum, i;

	printf("%d, %d, ", f, s);
	for (i = 1 ; i < 51; i++)
	{
		sum = f + s;
		printf("%d, ", sum);
		s = sum;
		f = s;
	}
	return (0);
}

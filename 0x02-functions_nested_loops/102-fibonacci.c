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
	for (i = 0; i < 50; i++)
	{
		sum = f + s;
		printf("%lu, ", sum);
		f = s;
		s = sum;
	}
	return (0);
}

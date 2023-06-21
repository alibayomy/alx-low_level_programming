#include <stdio.h>
#include "main.h"
/**
 * main - Entery point of the program
 *
 * Discription: print all the numbers that multiple
 *				of 3 and 5 and lower than 1024
 *
 * Return: always 0 means success
 */
int main(void)
{
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || (i % 5) == 0)
		{
			sum = i;
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}

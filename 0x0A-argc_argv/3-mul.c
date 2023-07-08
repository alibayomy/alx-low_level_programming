#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entery point, that multiplies two numbers..
 * @argc: counts the arguments passed  to the program
 * @argv: an array of the arguments passed
 * Return:  (0) if success else 1
 */
int main(int argc, char *argv[])
{
	int i;

	int sum = 1;

	if (argc == 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

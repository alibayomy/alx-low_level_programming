#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - entery point
 * @argc: number of arguments passed into the main
 * @argv: array of strings of the passed arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") != 0
			&& strcmp(argv[2], "-") != 0
			&& strcmp(argv[2], "*") != 0
			&& strcmp(argv[2], "/") != 0
			&& strcmp(argv[2], "%") != 0)

	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 ||
				strcmp(argv[2], "%") == 0)
				&& (strcmp(argv[3], "0") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	operator = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (get_op_func(operator)(a, b));
	printf("%d\n", result);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - entery point
 * @argc: number of arguments passed
 * @argv: array of the arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}

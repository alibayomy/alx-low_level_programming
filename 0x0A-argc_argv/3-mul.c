#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entery point, that multiplies two numbers..
 * @argc: counts the arguments passed  to the program
 * @argv: an array of the arguments passed
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

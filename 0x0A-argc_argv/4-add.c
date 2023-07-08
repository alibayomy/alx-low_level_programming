#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entery point, that adds postive numbers.
 * @argc: counts the arguments passed  to the program
 * @argv: an array of the arguments passed
 * Return:  (0) if success else 1
 */
int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

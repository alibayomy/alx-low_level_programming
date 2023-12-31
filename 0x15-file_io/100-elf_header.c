#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entery point
 * @argc: the number of arguments passed to the main
 * @argv: array of strings of the argument passed
 * Return: 0 in success
 */
int main(int argc, char *argv[])
{
	int f;
	(void) argc;

	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read the file%s\n", argv[1]);
		exit(98);
	}
	return (0);
}

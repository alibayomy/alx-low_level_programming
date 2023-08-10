#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - copy the content of another file
 * @argc: the number of arguments to main
 * @argv: array of strings of the passed arguments
 * Return: 0 on success, else -1
 */
int main(int argc, char *argv[])
{
	if (argc =! 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}

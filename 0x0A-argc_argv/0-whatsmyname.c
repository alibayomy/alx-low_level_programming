#include <stdio.h>
/**
 * main - entery point, a program that prints
 *	 its name, followed by a new line.
 * @argc: counts the arguments passed  to the program
 * @argv: an array of the arguments passed
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s", argv[0]);
	return (0);
}

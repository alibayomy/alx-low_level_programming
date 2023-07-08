#include <stdio.h>
/**
 * main - entery point , prints how many
 *	argumets passed into it
 *@argc: calculate the argument passed
 *@argv: an array of the argument passed
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

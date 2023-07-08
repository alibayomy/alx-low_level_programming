#include <stdio.h>
/**
 * main - entery point,prints all arguments it receives.
 *@argc: counting the passed arguments
 *@argv: a pointer to an array of the passed arguments
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

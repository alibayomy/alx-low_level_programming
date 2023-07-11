#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the argument of a program
 * @ac: number of programs
 * @av: array of the program agruments
 * Return: a poitner to a new string, NULL if faild
 */
char *argstostr(int ac, char **av)
{
	int x = 0, i, y, sum = 0;

	char *final_string;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
		{
			sum = sum + 1;
		}
	}
	final_string = malloc((sizeof(char) * sum) + (ac + 1));
	if (final_string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
		{
			final_string[x] = av[i][y];
			x++;
		}
		final_string[x] = '\n';
		x++;
	}
	return (final_string);
}

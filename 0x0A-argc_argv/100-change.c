#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * helper - helper to calc the coins
 * @n: the amount of money
 * Return: the number of coins
 */
int helper(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n >= 2 && n < 5)
		return (1 + helper(n - 2));
	if (n >= 5 && n < 10)
		return (1 + helper(n - 5));
	if (n >= 5 && n < 25)
		return (1 + helper(n - 10));
	if (n >= 25)
	{
		return (1 + helper(n - 25));
	}
	else
	{
		return (0);
	}
}
/**
 * main - entery point, prints the minimum number of
 *      coins to make change for an amount of money..
 * @argc: counts the arguments passed  to the program
 * @argv: an array of the arguments passed
 * Return:  (0) if success else 1
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n = atoi(argv[1]);

		if (n < 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", helper(n));
		}
	}
	return (0);
}

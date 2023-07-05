#include "main.h"
/**
 * factorial - return a factorial of a number
 *@n: the given number
 * Return: the value of the factorial and
 *	-1 if n is < 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include "main.h"
#include "4-pow_recursion.c"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: function paramter , root number to get the natural sqaure of
 * Return: the natural sqaure of n, (-1) if there is no
 *	natural sqaure of n
 */
int _sqrt_recursion(int n)
{
	return(get_square(n, 1));
}
/**
 * get_square - helper fun get the sqaure of n
 *@n: thebase number
 *@i: the root of the number
 *Return: the natural sqaure of n, (-1) if there is no
 *	natural sqaure of n
 */
int get_square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	else
	{
		get_square(n, i + 1);
	}
}

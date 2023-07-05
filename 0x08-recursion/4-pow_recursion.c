#include "main.h"
/**
 * _pow_recursion - returns a value of x power to y
 * @x: the base number
 * @y: the power number
 * Return: the value of x power or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

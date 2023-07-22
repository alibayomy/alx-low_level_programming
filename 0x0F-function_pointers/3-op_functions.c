#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds to numbers
 * @a: first number
 * @b: second number
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: the subtraction of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two given numbers
 * @a: first number
 * @b: second number
 * Return: the multiplication of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two given numbers
 * @a: first number
 * @b: second number
 * Return: the division of the two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - get the remainder of the division of a by b
 * @a: the given first number
 * @b: the given second number
 * Return: the remainder of the division a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

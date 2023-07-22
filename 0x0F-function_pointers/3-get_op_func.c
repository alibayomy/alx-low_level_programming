#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - select the appropiate function
 * @s: the given operator
 * Return: a pointer to the appropriate
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}

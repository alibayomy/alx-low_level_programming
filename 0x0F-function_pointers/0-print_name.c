#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a name to be printed
 * @f: a pointer to a given function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

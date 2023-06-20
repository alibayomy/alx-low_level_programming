#include <stdio.h>
#include "main.h"
/*
 * main - Entery point
 *
 * print_alphabet: helper function that prints the lowercase
 *
 * Discription: print all the alphabet with new line
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	for (i = 97; i < 123; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}

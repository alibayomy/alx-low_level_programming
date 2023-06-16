#include <stdio.h>
/**
 * main - Entery point
 *
 * Description : print all numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
	putchar(n);
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}

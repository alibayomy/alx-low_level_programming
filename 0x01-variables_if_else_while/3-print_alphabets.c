#include <stdio.h>
/**
 * main - Entery point
 *
 * Description: print alphabet in lowercase and uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}
	for (n = 60; n < 91; n++)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}

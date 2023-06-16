#include <stdio.h>
/**
 * main - Entery point
 *
 * Description : print alphabet in lowercase
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
	putchar("\n");
	return (0);
}



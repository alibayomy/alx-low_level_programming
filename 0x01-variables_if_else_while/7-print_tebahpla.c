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

	for (n = 122; n > 96; n--)
	{
	putchar(n);
	}
	putchar(10);
	return (0);
}

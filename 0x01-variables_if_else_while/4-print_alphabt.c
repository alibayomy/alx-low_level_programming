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

	for (n = 97; n < 123 && n != 101 && n != 113; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
		else

	}
	putchar(10);
	return (0);
}


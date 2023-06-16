#include <stdio.h>
/**
 * main - Entery point
 *
 * Description: print all 1 digit nums with putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48 ; n < 58; n++)
	{
		putchar (n);
	}
	putchar (10);
	return (0);
}

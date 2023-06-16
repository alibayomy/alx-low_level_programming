#include <stdio.h>
/**
 * main - Entery point
 *
 * Description: printing all numbers in one digit
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 57)
		{
			putchar (n);
			putchar (44);
			putchar (32);
		}
		else
		{
			putchar (n);
		}
	}
	putchar (10);
	return (0);
}

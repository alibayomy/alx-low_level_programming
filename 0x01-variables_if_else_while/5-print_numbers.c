#include <stdio.h>
/**
 * main - Entery point
 *
 * Description: print all numbers in 1 digit
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

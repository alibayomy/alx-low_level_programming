#include <stdlib.h>
#include <time.h>
/**
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 * main - Entery point
 *
 * Description: using if statment Print wether in is postive or negative
 *
 * return: always 0 (success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("is zero");
	}
	else
		if (n > 0)
		{
			printf("is positive");
		}
		else
			if (n < 0)
			{
				prinftf("is negative");
			}
	return (0);
}

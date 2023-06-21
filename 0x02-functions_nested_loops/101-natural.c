#include <stdio.h>
#include "main.h"
/**
 * natural - prints the sum of the numbers that are multiples
 *	of 3 and 5 and lower than 1024
 */
void natural(void)
{
	int i = 0;

	int sum = 0;

	while (i < 1024)
	{
		if (((i % 3) == 0) || (i % 5) == 0)
		{
			sum = sum + i;
			i++;
		}
	}
	printf("%d", sum);
}

#include "main.h"
/**
 * is_prime_number - tell if a number is prime or not
 * @n: the given number
 * Return: returns 1 if the input integer is a prime number,
 *	otherwise return 0.
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
/**
 * prime_helper - helper function to check if n is prime
 * @n: the number to check
 * @i: start from 2 and increasing
 * Return: 0 if is not prime else 1
 */
int prime_helper(int n, int i)
{
	if (n == 1 || n <= 0)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}

	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime_helper(n, i + 1));
		}
	}
}

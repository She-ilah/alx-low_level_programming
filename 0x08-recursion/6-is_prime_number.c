#include "main.h"

int _prime_calc(int n, int i);

/**
 * is_prime_number - Returns 1 if input is a prime number
 * @n: integer to be examined
 * Return: 1 if prime number or 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_calc(n, n - 1));
}

/**
 * _prime_calc - dtermines whether a number is a prime number
 * @n: number to be examined
 * @i: iterator
 * Return: 1 if prime number or 0 otherwise
 */
int _prime_calc(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (_prime_calc(n, i - 1));
}

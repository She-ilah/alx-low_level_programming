#include "main.h"

int new_prime(int n, int m);

/**
 * is_prime_number - returns 1 if the input is a prime number
 * @n: integer to be tested
 * Return: int, 1 if prime number or 0 if not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (new_prime(n, n - 1));
}
/**
 * new_prime - determines if input is a prime number
 * @n: integer to be tested
 * @m: integer that is an iterator
 * Return: int, 1 if prime number or 0 if not a prime number
 */
int new_prime(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if (n % m == 0 && m > 0)
	{
		return (0);
	}
	return (new_prime(n, m - 1));
}

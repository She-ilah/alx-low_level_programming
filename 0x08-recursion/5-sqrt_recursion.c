#include "main.h"

int new_sqrt(int n, int m);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to be used
 * Return: int, natural square root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (new_sqrt(n, 0));
}

/**
 * new_sqrt - finds the natural square root
 * @n: integer to be used
 * @m: integer to calculate sqaure root
 * Return: int, natural sqaure root of number
 */
int new_sqrt(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (new_sqrt(n, m + 1));
}


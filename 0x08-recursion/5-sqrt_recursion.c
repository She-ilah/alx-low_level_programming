#include "main.h"

int _sqrt_calc(int n, int i);

/**
 * _sqrt_recursion - function returns the square root of a number.
 * @n: number whose square root is to be determined
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_calc(n, 0));
}

/**
 * _sqrt_calc - function calculates the natural square root.
 * @n: number whose square root is to be calculated.
 * @i: iterator
 * Return: the square root
 */
int _sqrt_calc(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_calc(n, i + 1));
}

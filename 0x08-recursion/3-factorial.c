#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number whose factorial is to be calculated
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n = n * factorial(n - 1));
}

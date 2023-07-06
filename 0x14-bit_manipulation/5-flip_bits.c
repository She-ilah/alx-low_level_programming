#include "main.h"

/**
 * flip_bits - function returns the number of bits to flip to get a reverse.
 * @n: starting number
 * @m: consequetive number
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result = 0;
	unsigned long int num;
	unsigned long int change = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = change >> i;
		if (num & 1)
			result++;
	}
	return (result);
}


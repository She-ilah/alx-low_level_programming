#include "main.h"

/**
 * print_binary - function prints the binary version of numbers.
 * @n: number to print.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, check = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			check++;
		}
		else if (check)
			_putchar('0');
	}
	if (!check)
		_putchar('0');
}


#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers.
 * description - program prints natural numbers.
 * @n: the starting number to print from
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		printf("\n");
		break;
	}
	else
	{
		printf("%d", n);
		printf(",");
		printf(" ");
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		printf("\n");
		break;
	}
	else
	{
		printf("%d", n);
		printf(",");
		printf(" ");
	}
	}
	}
}

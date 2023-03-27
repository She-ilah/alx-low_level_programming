#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf(" %d", a[m]);
		if (m != n - 1)
			printf(",");
	}
	if (m == (n - 1))
	{
		printf(" %d", a[n - 1]);
	}
	printf("\n");
}

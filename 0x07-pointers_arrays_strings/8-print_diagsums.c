#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: array to be printed
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int num1 = 0;
	int num2 = 0;
	int n;

	for (n = 0; n < size; n++)
	{
		num1 = num1 + a[n * size + n];
	}
	for (n = size - 1; n >= 0; n--)
	{
		num2 += a[n * size + (size - n - 1)];
	}
	printf("%d, %d\n", num1, num2);
}

#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;

	for (b = 0; b < n / 2; b++)
	{
		int arr = a[b];

		a[b] = a[n - 1 - b];
		a[n - 1 - b] = arr;
	}
}

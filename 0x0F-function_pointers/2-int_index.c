#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @cmp: pointer to the function used to compare values
 * @array: array of values to be compared
 * @size: size of array
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}

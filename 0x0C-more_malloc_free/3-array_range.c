#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Function creates an array of integers
 * @min: minimum range of int values in array
 * @max: maximum range of int values in array
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *int_arr;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	int_arr = malloc(sizeof(int) * n);

	if (int_arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		int_arr[i] = min++;

	return (int_arr);
}

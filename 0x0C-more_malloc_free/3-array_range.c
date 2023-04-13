#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: values of array(minimum)
 * @max: values of array(maximum)
 * Return: int, pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}

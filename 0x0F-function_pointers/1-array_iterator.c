#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function.
 * @array: array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (n = 0; n < size; n++)
	{
		(*action)(array[n]);
	}

}

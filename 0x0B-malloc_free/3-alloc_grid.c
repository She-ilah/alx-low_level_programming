#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a point to a 2D array of integers
 * @width: integer in array
 * @height: integer in array
 * Return: int, pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int n;
	int m;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		arr[n] = malloc(sizeof(int) * width);

	if (arr[n] == NULL)
	{
		for (; n >= 0; n--)
		free(arr[n]);

		free(arr);
		return (NULL);
	}
	}
	for (n = 0; n < height; n++)
	{
	for (m = 0; m < width; m++)
	arr[n][m] = 0;
	}
	return (arr);
}

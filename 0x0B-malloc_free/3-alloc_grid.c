#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function returns a pointer to a 2D integer array
 * @width: element in array
 * @height: element in array
 * Return: pointer to the 2D array or NULL upon failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			arr[i][n] = 0;
	}
	return (arr);

}

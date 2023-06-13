#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees the file alloc_grid.c
 * @grid: 2D array
 * @height: element in the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

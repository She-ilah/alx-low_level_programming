#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the previous 2d grid
 * @grid: 2D grid
 * @height: size of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}

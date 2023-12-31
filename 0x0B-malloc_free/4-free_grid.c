#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This frees a 2 dimensional grid.
 * @grid: address of the two dimensionl grid.
 * @height: height of the grid.
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid previously created by alloc_grid
 * @grid: pointer to the grid to be freed
 * @grid_height: height of the grid
 *
 * Description:Function frees the memory allocated for a 2-dimensional grid.
 * Each row is freed individually, followed by freeing the grid itself.
 *
 * Return: void
 */
void free_grid(int **grid, int grid_height)
{
	int row;

	if (grid == NULL || grid_height <= 0)
		return;

	for (row = 0; row < grid_height; row++)
	{
		free(grid[row]);
	}

	free(grid);
}


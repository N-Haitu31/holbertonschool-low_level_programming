#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid previously created by alloc_grid
 * @grid: pointer to grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)

{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

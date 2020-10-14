#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * Return: -nothing-
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	if (height <= 0)
		return;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}

	free(grid);
}

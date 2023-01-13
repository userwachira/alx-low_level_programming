#include "main.h"
/**
 * free_grid - frees the grid
 * @grid: grid
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

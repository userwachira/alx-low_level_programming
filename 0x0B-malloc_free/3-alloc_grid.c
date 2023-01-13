#include "main.h"
/**
 * alloc_grid - creates a 2D array of integers
 * @width: integer representing the number of columns
 * @height: integer representing the number of rows
 * Return: NULL on failure or if width and height are negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int *));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}

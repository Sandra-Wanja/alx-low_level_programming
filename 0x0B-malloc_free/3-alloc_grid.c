#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2D array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to  array of ints
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int n, k;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(width * sizeof(int));
		if (grid[n] == NULL)
		{
			for (n--; n >= 0; n--)
				free(grid[n]);
			free(grid);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
		for (k = 0; k < width; k++)
			grid[n][k] = 0;

	return (grid);
}

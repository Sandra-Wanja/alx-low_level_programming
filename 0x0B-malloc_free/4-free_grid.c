#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free a 2 dimensional grid
  * @grid: the multidimensional array of ints
  * @height: the height of the grid
  *
  * Return: nothing
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

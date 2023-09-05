#include "main.h"
#include <stdlib.h>

/**
  * free_grid - a function that free the previous two-dimentional
  *             arrays of integers.
  *
  * @grid: the two-dimentional array of integers to be freed
  * @height: the grid's height
  *
  * Return: retuen the grid
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

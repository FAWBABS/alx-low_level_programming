#include "main.h"

/**
 * free_grid - removing unused memory
 * @grid: grid to be freed
 * @height: height
 * Return: void
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

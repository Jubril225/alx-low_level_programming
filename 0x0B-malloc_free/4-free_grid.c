#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid -  a function that frees a 2 dimensional grid
 * @grid: pointer
 * @height: height of grid
 *
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


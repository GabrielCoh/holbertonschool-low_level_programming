#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * @grid: adress of the two dimensional grid
 * @height: height of thegrid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

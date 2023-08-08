#include <stdlib.h>
/**
 * free_grid - free dynamically alloctaed 2d array of integers
 * @height: height of grid
 * @grid: grid to free
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

#include "main.h"
/**
 * free_grid - frees an array
 * @grid: double pointer to two-dimensional array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height ; i++)
		free(grid[i]);
	free(grid);
}

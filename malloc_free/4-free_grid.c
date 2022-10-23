#include "main.h"
/**
 * free_grid - frees an array 2D
 * @grid: double pointer to two-dimensional array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height ; i++)	/*I run through each grid block and apply a free for each block assigned to it*/
		free(grid[i]);
	free(grid);	/*I release the principal*/
}

#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array 2D
 * @height: height of the array 2D
 *
 * Return: pointer to the array 2D, or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (arr);
	arr = malloc(sizeof(int) * width);
	if (!arr)
		return (arr);
	for (; i < width; i++)
	{
		arr[i] = malloc( height* sizeof(int));
		if (!arr[i])
		{
			free(arr);
			free(arr[i]);
			return(arr);
		}
		for (; j < height; j++)
		{
			arr[i][j] = 0;

		}
	}
	return (arr);
}


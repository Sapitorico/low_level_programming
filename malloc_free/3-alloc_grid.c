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
	arr = malloc(sizeof(int *) * height);
	if (!arr)
		return (arr);
	for (; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (!arr[i])
		{
			for (; j < i; j--)
			free(arr[j]);
			free(arr);
			return(arr);
		}
		for (; j < width; j++)
			arr[i][j] = 0;

	}
	return (arr);
}


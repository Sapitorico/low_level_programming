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

	if (!width || !height)
		return (arr);
	arr = malloc(sizeof(char) * width);
	for (; i < height; i++)
	{
		arr[i] = malloc(height);
		if (!arr)
		{
			free(arr);
		}
	}
	return (arr);
}


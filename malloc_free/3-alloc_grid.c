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

	if (width <= 0 || height <= 0)	/*If width or height is 0 or negative, return NULL*/
		return (arr);
	arr = malloc(sizeof(int *) * height);
	if (!arr)
		return (arr);	/*The function should return NULL on failure*/
	for (; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (!arr[i])
		{
			for (--i; i >= 0; i--)	/*At the moment that arr[i] has failed it will be NULL, indicating that it is out of memory and the space is not enough, I must perform a free for each malloc performed in each block in the iteration process.*/
				free(arr[i]);
			free(arr);	/*then free it and return the main malloc, since it is not required in case the second malloc fails.*/
			return (arr);
		}
		for (; j < width; j++)
			arr[i][j] = 0;	/*Each element of the grid must be initialized to 0*/
	}
	return (arr);
}


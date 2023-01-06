#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: array
 * @size: size
 * @value: value
 * return: int 
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (0);
	for (i = 0; i < size -1; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}

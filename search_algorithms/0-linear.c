#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size - 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (-1);
}

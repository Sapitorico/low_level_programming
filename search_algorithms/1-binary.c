#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (!array)
		return (-1);
	while (left <= right)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}

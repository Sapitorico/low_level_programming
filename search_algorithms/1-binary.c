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
	size_t left = 0, right = size - 1, mid;
	size_t i = 0;

	if (!array)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d ", array[i]);
	}
	printf("\n");
	while (left < right)
	{
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			left = mid + 1;
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				if (i <= right - 1)
					printf("%d, ", array[i]);
				else
					printf("%d ", array[i]);
			}
			printf("\n");
		}
		else
		{
			right = mid - 1;
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				if (i <= right -1)
					printf("%d, ", array[i]);
				else
					printf("%d ", array[i]);
			}
			printf("\n");
		}
	}
	return (-1);
}

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
	size_t low = 0; 
	size_t high = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);
	printf("Searching array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
	while (low < high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
		{
			low = mid + 1;
			printf("Searching array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i != high)
					printf(", ");
			}
			printf("\n");
		}
		else
		{
			high = mid - 1;
			printf("Searching array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i != high)
					printf(", ");
			}
			printf("\n");
		}
	}
	return (-1);
}
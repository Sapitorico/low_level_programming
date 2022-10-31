#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to array of integers
 * @size: number of elements in the array array
 * @cmp: function to be used to compare values
 *
 * Return: returns the index of the first element for which the cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array)
		return (-1);
	for (; i < size; i++)
	{
		if ((cmp)(array[i]))
			return (i);
	}
	return (-1);
}

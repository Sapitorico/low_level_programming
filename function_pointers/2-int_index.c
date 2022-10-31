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

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (; i < size; i++)
		if ((cmp)(array[i]))	/*where cmp returns the equality, returns the index where it found that equality */
			return (i);
	return (-1);
}

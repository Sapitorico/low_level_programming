#include "main.h"
int *_setrange(int *arr, int m, unsigned int n);
/**
 * array_range - creates an array of integers sorted from smallest to largest
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the array of integers sorted from smallest to largest
 */
int *array_range(int min, int max)
{
	int *arri = NULL;

	if (min > max)
		return (arri);
	arri = malloc((max - min + 1) * sizeof(int));	/*memory for storing a corresponding amount of memory values from min (included) to max (included), sorted from min to max*/
	if (!arri)
		return (arri);
	arri = _setrange(arri, min, (max - min + 1));
	return (arri);
}
/**
 * _setrange - set the array from smallest to largest
 * @arr: pointer to array of integers
 * @m: minimum value
 * @n: limit of the matrix
 *
 * Return: returns the address to the sorted integer array
 */
int *_setrange(int *arr, int m, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		arr[i] = m;
		m++;
	}
	return (arr);
}

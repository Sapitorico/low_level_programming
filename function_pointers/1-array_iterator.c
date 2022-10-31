#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter of an array.
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action)	/*if it is a pointer to a valid function*/
		if (array)	/*if array is not null*/
			for (; i < size; i++)
				(action)(array[i]);	/*sends parameter by parameter to the function*/
}

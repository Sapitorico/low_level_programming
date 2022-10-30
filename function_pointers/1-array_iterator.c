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

	if (action)
		if (array)
			for (; i < size; i++)
				(action)(array[i]);
}

#include "main.h"
/**
 * _realloc - reallocates a memory
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space
 * @new_size: the new size, in bytes of the new memory1~
 *
 * Return: the new lodging in memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *newptr = NULL, *oldptr = (char *)ptr;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (!new_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		old_size = new_size;
	newptr = malloc(new_size);
	if (!newptr)
		return (NULL);
	for (; i < old_size; i++)
		newptr[i] = oldptr[i];
	free(ptr);
	return (newptr);
}

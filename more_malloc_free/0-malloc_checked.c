#include "main.h"
/**
 * malloc_checked - allocates a specific amount of memory space in bytes
 * @b: memory block size positive integer
 *
 * Return: empty pointer to the first byte of the allocated block
 */
void *malloc_checked(unsigned int b)
{
	void *tpt = NULL;

	tpt  = malloc(b);	/*assigns an integer, positive, specific space*/
	if (!tpt)
		exit(98);
	return (tpt);
}

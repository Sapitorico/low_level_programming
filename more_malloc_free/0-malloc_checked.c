#include "main.h"
/**
 * malloc_checked - allocates a specific amount of memory space in bytes
 * @b: memory block size positive integer
 *
 * Return: empty pointer to the first byte of the allocated block
 */
void *malloc_checked(unsigned int b)
{
	void *tpt = NULL;	/*declares an empty pointer with a base value of NULL, indicating that it does not point to any content.*/

	tpt  = malloc(b);	/*assigns an integer, positive, specific space*/
	if (!tpt)
		exit(98);	/*The Unix98 standard requires malloc() to set errno to ENOMEM upon failure*/
	return (tpt);
}

#include "main.h"
/**
 * malloc_checked
 */
void *malloc_checked(unsigned int b)
{
	void *tpt = NULL;

	tpt  = malloc(b);
	if (!tpt)
		exit(98);
	return (tpt);
}

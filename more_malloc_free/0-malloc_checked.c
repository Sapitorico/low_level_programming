#include "main.h"
/**
 */
void *malloc_checked(unsigned int b)
{
	void *tpt = NULL;

	tpt  = malloc(b);
	if (!tpt)
		exit(98);
	return (tpt);
}

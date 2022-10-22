#include "main.h"
/**
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrl = NULL;

	arrl = malloc(nmemb * size);
	if (!arrl)
		return (NULL);
	return (arrl);
}

#include "main.h"
/**
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrl = NULL;

	if (!nmemb || !size)
		return (arrl);
	arrl = malloc(nmemb * size);
	if (!arrl)
		return (NULL);
	return (arrl);
}

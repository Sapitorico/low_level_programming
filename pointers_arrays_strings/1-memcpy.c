#include "main.h"
/**
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *copy = dest;

	for (; i < n; i++)
	{
		copy[i] = src[i];
	}
	return (dest);
}

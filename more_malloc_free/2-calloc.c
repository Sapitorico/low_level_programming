#include "main.h"
char *_memset(char *s, char b, unsigned int n);
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
	arrl = _memset(arrl, 0, size);
	return (arrl);
}
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the array address
 * @b: is the added constant character or bytes
 * @n: the constant number of bytes b
 *
 * Return: returns the initial position of the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

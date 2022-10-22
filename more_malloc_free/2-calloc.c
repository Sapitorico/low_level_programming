#include "main.h"
/**
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *arrl = NULL;

	if (!nmemb || !size)
		return (arrl);
	arrl = malloc(nmemb * size);
	if (!arrl)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arrl[i] = 0;
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
char *_memset(char *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < (n * b); i++)
		s[i] = b;
	return (s);
}

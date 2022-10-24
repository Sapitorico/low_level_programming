#include "main.h"
/**
 * _calloc - allocates memory for a data type
 * @nmemb: number of elementsi of a data type
 * @size: data type size
 *
 * Return: empty pointer to the allocated memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrl = NULL;

	if (!nmemb || !size)
		return (arrl);
	arrl = malloc(nmemb * size);
	if (!arrl)
		return (NULL);
	arrl = _memset(arrl, 0, (size * nmemb));
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
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

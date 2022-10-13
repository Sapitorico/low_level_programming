#include "main.h"
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

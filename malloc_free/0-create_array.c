#include "main.h"
/**
 * create_array - creates an array of constat chars
 * @size: size of the array
 * @c: specific char
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;

	if (!size)
		return(arr);
	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (arr);
	arr = _memset(arr, c, size);
	return (arr);
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

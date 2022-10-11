#include "main.h"
/**
 * _strncpy - copies the string at most n bytes
 * @dest: string copy destination
 * @src: string copy
 * @n: number of bytes copied, value of src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i]; i++)
		dest[i] = src[i];
	dest[n] = 0;
	return (dest);
}

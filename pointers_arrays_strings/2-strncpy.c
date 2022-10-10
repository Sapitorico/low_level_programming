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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

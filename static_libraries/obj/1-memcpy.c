#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: what will be copied
 * @n: the amount to be copied
 *
 * Return: to the initial position
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *copy = dest;	/*copies memory*/

	for (; i < n; i++)
		copy[i] = src[i];	/*copy the constants*/
	return (dest);
}

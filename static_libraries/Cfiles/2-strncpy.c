#include "main.h"
/**
 * _strncpy - copies the string at most n bytes
 * @dest: string copy destination
 * @src: string copy
 * @n: number of bytes copied, value of src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i]; i++)	/*takes the n bytes elements of src*/
		dest[i] = src[i];	/*copy and upload only the specified size within the destination*/
	for (; i < n; i++)
		dest[i] = 0;	/*representation of the value has less digits, it is prefixed with 0's*/
	return (dest);
}

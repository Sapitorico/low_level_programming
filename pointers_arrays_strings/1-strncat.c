#include "main.h"
/**
 * _strncat - concatenates two strings
 *@dest: concatenated destination
 *@src: pointer to string to be concatenated
 *@n: n is the number of bytes of src
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)	/*it will use at most n bytes from src*/
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count] != '\0'; count++)
		;
	return (count);
}

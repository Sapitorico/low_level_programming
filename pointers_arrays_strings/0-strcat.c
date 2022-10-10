#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the target srtring to be concatenated
 * @src: pointer to the strign to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[len + i] = src[i];		/*concatenates the string*/
	}
	dest[len + i] = '\0';		/*delimits the concatenated Sting */
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

#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to the main string
 * @s2: pointer to the secondary string
 *
 * Return: pointer to the concatenated strig, or NULL if empty
 */
char *str_concat(char *s1, char *s2)
{
	char *dest = NULL;

	if (!s1 && !s2)
		return (dest);
	dest = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (!dest)
		return (dest);
	dest = _strcat(dest, s1);
	dest = _strcat(dest, s2);
	return (dest);
}
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the target srtring to be concatenated
 * @src: pointer to the strign to concatenate
 *
 * Return: the concatenated character string
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 *
 * Return: all elements of the stirng
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count]; count++)
		;
	return (count);
}

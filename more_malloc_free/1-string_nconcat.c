#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to the main string
 * @s2: pointer to the secondary string
 *
 * Return: pointer to the concatenated strig, or NULL if empty
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	dest = malloc(_strlen(s1) + n + 1);
	if (!dest)
		return (dest);
	dest = _strcpy(dest, s1);
	dest = _strncat(dest, s2, n);
	return (dest);
}
/**
 * _strncat - concatenates two strings
 * @dest: concatenated destination
 * @src: pointer to string to be concatenated
 * @n: n is the number of bytes of src
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
/**
 * *_strcpy -  function that copies the string
 * @src: pointer to the strign
 * @dest: string copy destination
 *
 * Return: returns copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while ((*copy++ = *src++) != '\0')
		;
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

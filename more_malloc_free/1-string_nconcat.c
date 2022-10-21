#include "main.h"
/**
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	arr = malloc(_strlen(s1) + n + 1);
	if (!arr)
		return (NULL);
	arr = _strcat(arr, s1);
	arr = _strncat(arr, s2, n);
	return (arr);
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
		dest[len + i] = src[i];
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
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 * Return: string length
 */
unsigned int _len(char *s)
{
	int count = 0;

	for (; s[count] != '\0'; count++)
		;
	return (count);
}

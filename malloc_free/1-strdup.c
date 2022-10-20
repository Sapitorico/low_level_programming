#include "main.h"
/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: pointer to the string
 *
 * Return: pointer to a new string or NULL
 */
char *_strdup(char *str)
{
	char *copy = NULL;

	if (!str)
		return (copy);
	copy = malloc(_strlen(str) + 1);
	if (!copy)
		return (copy);
	copy = _strcpy(copy, str);
	return (copy);
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

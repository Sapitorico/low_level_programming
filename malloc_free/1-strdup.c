#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: pointer to the string
 *
 * Return: pointer to a new string duplicate or NULL
 */
char *_strdup(char *str)
{
	char *copy = NULL;

	if (!str)
		return (copy);
	/*it is also valid to use sizeof, since this operator returns the amount of memory required to store the content of the required data. */
	copy = malloc(_strlen(str) + 1);	/*space required for the number of elements, plus 1 to assign the limiting '\0' character*/
	if (!copy)
		return (copy);
	copy = _strcpy(copy, str);	/*makes a copy of the str to the new array that will contain its copy*/
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

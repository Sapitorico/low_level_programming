#include "main.h"
int _strncmp(char *s1, char *s2, int n);
/**
 * _strstr- locates a substring
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 *
 * Return: position of the found substring, NULL substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *aux = haystack;

	for (; *aux; aux++)
	{
		if (_strncmp(aux, needle, _strlen(needle)) == 0)
			return (aux);
	}
	return (NULL);
}
/**
 * _strncmp - compares two strings
 * @s1: pointer to the compared string
 * @s2: pointer to comparison strin
 * @n: s2 elements
 *
 * Return: difference of characters in their ASCII numeric value or 0 if equal
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	for (; i < n && s1[i] && s2[i]; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 * Return: all elements of the stirng
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count]; count++)
		;
	return (count);
}

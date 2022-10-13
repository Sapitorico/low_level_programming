#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: bytes of the substring
 *
 * Return: the bytes of the found substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	if (!s || !accept)
		return (i);
	while (*s && _strchr(accept, *s++))
	{
		i++;
	}
	return (i);
}
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: desired character
 *
 * Return: to the matching position, if equal 0
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
	}
}

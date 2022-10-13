#include "main.h"
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

#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: desired character
 *
 * Return: to the matching position, if null 0
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)	/*search for a match with c*/
			return (s);
		if (!*s)	/*if null*/
			return (0);
	}
}

#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string
 * @accept: pointer to the string
 *
 * Return: to the position found, or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (; s[i]; i++)
	{
		for (; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}

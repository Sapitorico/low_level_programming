#include "main.h"
/**
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

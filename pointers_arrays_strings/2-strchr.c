#include "main.h"
/**
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

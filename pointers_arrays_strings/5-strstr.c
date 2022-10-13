#include "main.h"
/**
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char b = 0;

	while (haystack[i])
	{
		while (needle[b] && (haystack[i] == needle[0]))
		{
			if (haystack[i + b] == needle[b])
			{
				b++;
			}
			else
				break;
		
		}
		if (needle[b])
		{
			i++;
			b = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

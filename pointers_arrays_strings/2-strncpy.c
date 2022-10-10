#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	char *copy = dest;

	while ((*copy++ = *src++) != '\0' && < n)
		;
	return (dest);
}

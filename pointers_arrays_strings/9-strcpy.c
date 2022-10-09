#include "main.h"

char *_strcpy(char *dest, char *src)
{
	char *copy = dest;
	while ((*copy++=*src++)!= '\0')
		;
	return (dest);
}

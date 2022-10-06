#include "main.h"
/**
 * _strlen - retunr lengt of string
 * @s: pinter to addres os strign
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

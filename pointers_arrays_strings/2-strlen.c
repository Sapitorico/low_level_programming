#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 */
int _strlen(char *s)
{
	int count = 0;

	for (;s[count] != '\0'; count++);
	return (count);
}

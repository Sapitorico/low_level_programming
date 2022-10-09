#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count] != '\0'; count++)	/*saves the size of constant chars traversed in count*/
		;
	return (count);
}

#include "main.h"
/**
 * print_rev - 
 * @s:
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int rev;

	for(rev = (len -1); rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
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

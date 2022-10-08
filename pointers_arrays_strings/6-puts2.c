#include "main.h"
/**
 */
void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (;s[len]; i+=2)
	{
		_putchar(str[i]);
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

#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the first position of the array
 */
void puts2(char *str)
{
	int i = 0;
	int len = _strlet(str);

	for (; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count] != '\0'; count++)
		;
	return (count);
}

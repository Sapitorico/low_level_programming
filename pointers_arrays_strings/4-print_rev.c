#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer of char type to the first character of the Sting
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int rev;

	for (rev = len; rev >= 0; rev--)
	{
		_putchar(s[rev]);
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

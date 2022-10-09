#include "main.h"
/**
 * puts_half - prints half of a string
 *@str: char array string type
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int n = len / 2;

	if (n % 2 != 0)
	{
		for (i = n; i < n; i++)
		{
			_putchar(str[i]);
		}
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

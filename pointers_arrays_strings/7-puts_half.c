#include "main.h"
/**
 * pust_half - prints half of a string
 *@str: pointer to array of chars
 */
void puts_half(char *str)
{
	int len = _strlen(str) - 1;
	int n = len / 2;

	if (n % 2 == 0)
	{
		for (; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
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

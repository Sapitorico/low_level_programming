#include "main.h"
/**
 * puts_half - prints half of a string
 *@str: char array string type
 */
void puts_half(char *str)
{
	int len = _strlen(str) - 1;	/*string length minus the null charcater*/
	int n = len / 2;	/*contains half of string*/

	if (n % 2 == 0)	/*if the n len value is even*/
	{
		for (n++; str[n]; n++)	/*itera from n+1*/
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

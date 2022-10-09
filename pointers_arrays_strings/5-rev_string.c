#include "main.h"
/**
 * rev_string - reverse character positions of strign
 * @s: pointer to the received array location
 */
void rev_string(char *s)
{
	int len = (_strlen(s) - 1);
	int i = 0;
	char temp;

	for (; i <= len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
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

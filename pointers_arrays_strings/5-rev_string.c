#include "main.h"
/**
 */
void rev_string(char *s)
{
	int i;
	char temp;
	int len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i -1];
		s[len - i -1] = temp;
	}
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

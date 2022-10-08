#include "main.h"
void puts_half(char *str)
{
	int len = _strlen(str) - 1;
	int n = len / 2;

	if (n % 2 == 0)
	{
		for (; str[n];)
		{
			n++;
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
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

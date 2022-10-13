#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @str: pointer to the first position of the string
 * Return: returns to its initial position
 */
char *leet(char *str)
{
	char *s = str;
	int i = 0;
	char letters[] = {97, 101, 111, 116, 108};
	char encodes[] = {52, 51, 48, 55, 49};

	for (; *s; s++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == letters[i] || *s == letters[i] - 32)
			{
				*s = encodes[i];
			}
		}
	}
	return (str);
}

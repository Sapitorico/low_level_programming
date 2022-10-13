#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pinter to the string
 */
char *cap_string(char *s)
{
	int i = 0;
	int count = 0;
	char separator [] ={32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (; s[i]; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = (s[0] - 32);
		for (; separator[count]; count++)
		{
			if (s[i + 1] == separator[count])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = (s[i + 1] - 32);
				}
			}
		}
	}
	return (s);
}

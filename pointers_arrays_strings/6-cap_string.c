#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pinter to the string
 */
char *cap_string(char *s)
{
	int i = 0;
	int countsep = 0;
	char separators [] ={32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[i] >= 97 && s[i] <= 122)
		s[i] -= - 32;
	for (; s[i]; i++)
	{
		for (; separators[countsep]; count++)
		{
			if (s[i] == separators[countsep])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] -= - 32;
				}
			}
		}
	}
	return (s);
}

#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pinter to the string
 * Return: position s
 */
char *cap_string(char *s)
{
	int i = 0;
	int countsep = 0;
	char separators [] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};	/*arrangement of separators in their ascci value*/

	if (s[i] >= 97 && s[i] <= 122)	/*if the first letter of index 0 of the string is lowercase*/
		s[i] -= 32;
	for (i = 0; s[i]; i++)
	{
		for (countsep = 0; separators[countsep]; countsep++)
		{
			if (s[i] == separators[countsep])	/*if an equality is found in the string s the array of separators*/
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)	/*converts the following character after the separator into uppercase letters*/
				{
					s[i + 1] -= 32;
					break;	/*end the cycle by restarting it*/
				}
			}
		}
	}
	return (s);
}

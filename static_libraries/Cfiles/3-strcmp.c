#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to the compared string
 * @s2: pointer to comparison strin
 * Return: difference of characters in their ASCII numeric value or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] && s2[i]; i++)	/*iterates within the two strings*/
		if (s1[i] != s2[i])	/*if they are different return their difference*/
			return (s1[i] - s2[i]);
	return (0);	/*returns 0 specifying that they are equal*/
}

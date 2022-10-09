#include "main.h"
/**
 * rev_string - reverse character positions of strign
 * @s: pointer to the received array location
 */
void rev_string(char *s)
{
	int len = (_strlen(s) - 1);	/*ets the len to the character before the null character*/
	int i = 0;
	char temp;	/*time variable */

	for (; i <= len / 2; i++)	/*increases to be less than and equal to one half of the string*/
	{
		temp = s[i];	/*temp takes the value of the position of the iterator*/
		s[i] = s[len - i];	/*modifies the value of the position of i with that of len minus the position of i*/
		s[len - i] = temp;	/*len - i takes the value of the character of the position of i*/
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

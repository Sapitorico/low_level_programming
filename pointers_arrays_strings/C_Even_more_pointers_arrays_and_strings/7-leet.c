#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @str: pointer to the first position of the string
 *
 * Return: returns to its initial position
 */
char *leet(char *str)
{
	char *s = str;	/*auxiliary pointer to the address of str*/
	int i = 0;
	char letters[] = {97, 101, 111, 116, 108};	/*arrangement of letters to be encoded*/
	char encodes[] = {52, 51, 48, 55, 49};	/*encoding arrangement*/

	for (; *s; s++)
	{
		for (i = 0; i < 5; i++)	/*I increase the positions of the elements*/
		{
			if (*s == letters[i] || *s == letters[i] - 32)	/*finds a match between str and the specified lowercase or uppercase letter*/
			{
				*s = encodes[i];	/*changes the position of the match by the encoding*/
			}
		}
	}
	return (str);	/*returns a pointer to the first position of the encoded string*/
}

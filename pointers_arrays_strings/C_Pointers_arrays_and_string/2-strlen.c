#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 * Return: all elements of the stirng
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count]; count++)	/*saves the size of constant chars traversed in count*/
		;
	return (count);		/*returns the total number of elements*/
}

#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: pointer to the string
 *
 * Return: 0 if points to null, but returns length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);	/*returns the sum of the accumulation*/
}

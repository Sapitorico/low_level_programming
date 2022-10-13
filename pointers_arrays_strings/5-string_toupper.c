#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string
 * Return: returns the position of the changed characters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)/*iterates on the positions of str*/
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}

#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the first position of the array
 */
void puts2(char *str)
{
	for (; *str; str += 2)
	{
		if ((*str % 2) == 0 )
		{
			_putchar(str[str]);
		}
	}
	_putchar('\n');
}

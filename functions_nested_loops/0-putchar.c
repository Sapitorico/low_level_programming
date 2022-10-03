#include "main.h"
/**
 * main - print a characters
 * Return: 0
 */
int main(void)
{
	char *str = "_putchar";		/*char type pointer to an array with a strign*/

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}

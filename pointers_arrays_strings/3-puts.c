#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to the address of the first position of the string
 */
void _puts(char *str)
{
	for (; *str; str++)
		_putchar(*str);
	_putchar('\n');
}

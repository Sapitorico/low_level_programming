#include"main.h"
/**
 * _puts_recursion - prints a string
 * @s: ponter to the string
 */
void _puts_recursion(char *s)
{
	for (; *s; s++)
		_putchar(*s);
	_putchar(10);
}

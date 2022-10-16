#include"main.h"
/**
 * _puts_recursion - prints a string
 * @s: ponter to the string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);	/*print*/
		_puts_recursion(s + 1);	/*advances in the stack*/
	}
	else
		_putchar(10);
}

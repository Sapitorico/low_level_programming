#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to the string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);	/*accumulates the functions on the stack*/
		_putchar(*s);	/* prints it from the last position of the stack.*/
	}
}

#include "main.h"
/**
 * print_line - draws a straight line
 *@n: number of times chars
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('-');
		n--;
	}
	_putchar('\n');
}

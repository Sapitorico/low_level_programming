#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: inter resived
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		_putchar((n % 10) + '0');
		n /= 10;
	}
}

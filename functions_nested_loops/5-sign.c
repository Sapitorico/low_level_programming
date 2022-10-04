#include "main.h"
/**
 * print_sign - prints the sign
 * @n: argument is a sign that resive
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);	/*any return other than 0 indicates an error*/
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);	/*means the program was successful*/
	}
	else
		_putchar('-');
	return (-1);
}

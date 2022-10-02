#include "main.h"
/**
 * print_numbers - prints the numbers
 */
void print_numbers(void)
{
	int num = '0';

	for (; num <= '9'; num++)
	{
		_putchar(num);
		_putchar('\n');
	}
}

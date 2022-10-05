#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: inter resived
 */
void print_number(int n)
{
	if(n / 10 != 0)
	{
		_putchar(n % 10);
		print_number((n-n % 10) / 10);
		if ( n > 0 )
		{
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(-n % 10 + '0');
		}
	}
	else if((n / 10 == 0) && (n % 10 != 0) && (n > 0))
	{
		_putchar(n % 10 + '0');
	}
	else if((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
	{
		_putchar('-');
		_putchar(-n % 10 + '0');
	}
}

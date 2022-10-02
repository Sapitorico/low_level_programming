#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: is the number of times the character
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0 ; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}

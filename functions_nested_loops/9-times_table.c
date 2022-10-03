#include "main.h"
/**
 * times_table -  function that prints the 9 times table
 */
void times_table(void)
{
	int cociente = 0;
	int divisor = 0;
	int resultado;

	for (cociente = 0; cociente < 10; cociente++)	/*x-axis*/
	{
		for (divisor = 0; divisor < 10; divisor++)	/*y-axis*/
		{
			resultado = cociente * divisor;	/*result the x * y*/
			if (resultado > 9)
			{
				_putchar((resultado / 10) + '0');
				_putchar((resultado % 10) + '0');
			}
			else if (divisor != 0)
			{
				_putchar(' ');
				_putchar(resultado + '0');
			}
			else
				_putchar(resultado + '0');
			if (divisor != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

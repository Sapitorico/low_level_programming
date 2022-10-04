#include "main.h"
/**
 * times_table -  function that prints the 9 times table
 */
void times_table(void)
{
	int dividend;
	int divider;
	int resultado;
	char *sep = " ";
	char *sep1 = ",";

	for (divider = 0; divider < 10; divider++)	/*x-axis*/
	{
		for (dividend = 0; dividend < 10; dividend++)	/*y-axis*/
		{
			resultado = divider * dividend;		/*result the x * y*/
			if (resultado > 9)
			{
				_putchar((resultado / 10) + '0');	/*prints the first digit in ASCII*/
				_putchar((resultado % 10) + '0');	/*prints last digit in ASCII value*/
			}
			else if (dividend != 0)		/*from 1 to 8 print the separator plus the result*/
			{
				_putchar(*sep);
				_putchar(resultado + '0');
			}
			else
				_putchar(resultado + '0');	/*prints the buried as long as it is not greater than 9*/
			if (dividend != 9)	/*prints the separator and the resudate as long as it is different from 9*/
			{
				_putchar(*sep1);
				_putchar(*sep);
			}
		}
		_putchar('\n'); 	/*line break between each result on the x-axis*/
	}
}

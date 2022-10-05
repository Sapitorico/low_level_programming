#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int time;
	int num;

	for (time = 0; time < 10; time++)	/*number of lines to print*/
	{
		for (num = 0; num < 15; num++)	/*from where to where*/
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');	/*paints single-digit values until they are greater than 9*/
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}

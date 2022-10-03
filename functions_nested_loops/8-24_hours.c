#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hou, min;

	for (hou = 0; hou < 24; hou++)	/*hour meter*/
	{
		for (min = 0; min < 60; min++)	/*minute counter*/
		{
			_putchar((hou / 10) + '0');	/*prints the quotient */
			_putchar((hou % 10) + '0');	/*print the rest*/
			_putchar(':');			/*separator*/
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}

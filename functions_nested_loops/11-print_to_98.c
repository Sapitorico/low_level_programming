#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n:number received
 */
void print_to_98(int n)
{
	if (n <= 98)	/*if the argument received is less than 98*/
	{
		while (n < 98)	/*the lower the value, the higher the value increases to 97*/
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);	/*print 98 and new line*/
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}

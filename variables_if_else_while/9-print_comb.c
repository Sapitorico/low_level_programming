#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';

	for (; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

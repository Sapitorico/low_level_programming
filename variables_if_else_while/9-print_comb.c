#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char *sep = ", ";

	for (; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(*sep);
		}
	}
	putchar('\n');
	return (0);
}

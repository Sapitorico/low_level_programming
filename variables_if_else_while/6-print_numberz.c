#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		putchar((num % 10) + '0');	/*rest of the number from 0 to 9,'0'converts the result to its ASCII */
	putchar('\n');
	return (0);
}

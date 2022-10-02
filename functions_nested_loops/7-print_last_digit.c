#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number received
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int last_d = num % 10;

	if (last_d < 0)
	{
		last_d = -last_d;
	}
	return (last_d);
}

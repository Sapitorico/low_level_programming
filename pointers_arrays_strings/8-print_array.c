#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *@a: array of inters
 *@n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int len = _len(a);

	for (n = 0; a[n] != '\0'; n++)
	{
		if (n < len)
		{
			printf("%i, ", a[n]);
		}
		else
			printf("%i", a[n]);
	}
	printf("\n");
}
/**
 * _len - returns the length of a string
 * @num: pointer to array of integers
 * Return: string length
 */
int _len(int *num)
{
	int count = 0;

	for (; num[count] != '\0'; count++)
		;
	return (count);
}

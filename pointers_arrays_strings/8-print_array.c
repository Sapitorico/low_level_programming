#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *@a: array of inters
 *@n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int len = _len(a);

	for (n = 0; n <= len; n++)
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
 * @s: pointer to array of integers
 * Return: string length
 */
int _len(int *s)
{
	int count = 0;

	for (; s[count] != '\0'; count++)
		;
	return (count);
}

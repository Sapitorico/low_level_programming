#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *@a: array of inters
 *@n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; n++)
	{
		if (i  == n - 1)
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[n]);
	}
	printf("\n");
}

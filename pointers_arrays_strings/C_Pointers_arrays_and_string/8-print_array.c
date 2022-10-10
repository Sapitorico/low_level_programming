#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *@a: array of inters
 *@n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)		/*goes from index 0 to less than total number of element*/
	{
		if (i == n - 1)		/*when i equals the last index*/
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}

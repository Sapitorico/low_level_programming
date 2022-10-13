#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *@a: array of inters
 *@n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)	/*starts from index 0 to less than the total number of elements*/
	{
		if (i == n - 1)		/*if it is the last value of the array prints it without ', '*/
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}

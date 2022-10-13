#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pinter to array of integers
 * @n: n is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int len = n - 1;

	for (i = 0; i < len / 2; i++) /*increases the loop to the middle of the array*/
	{
		/*exchange of positions*/
		temp = a[i];
		a[i] = a[len - i];
		a[len - i] = temp;
	}
}

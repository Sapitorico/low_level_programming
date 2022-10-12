#include "main.h"
/**
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int len = n - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = a[i];
		a[i] = a[len - i];
		a[len - i] = temp;
	}
}

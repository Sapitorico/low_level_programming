#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer with the address of a
 * @b: pointer with the address of b
 */
void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;
	*b = num;
}

#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer with the address of a
 * @b: pointer with the address of b
 */
void swap_int(int *a, int *b)
{
	int num = *a;	/*declares the value of num with the value containing the pointer to *a*/

	/*exchange of values*/
	*a = *b;	/*reference the value of *b to *a*/
	*b = num;	/*reference the value of *a to *b*/
}

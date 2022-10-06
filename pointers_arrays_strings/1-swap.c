#include "main.h"
/**
 * swap_int - 
 * @a:
 * @b:
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

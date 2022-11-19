#include "main.h"
/**
 * get_bit - value of a bit at a given index.
 * @n: number binary
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);
	bit = n >> index;
	return (bit & 1);
}

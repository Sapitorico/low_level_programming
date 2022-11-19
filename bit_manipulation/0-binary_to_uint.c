#include "main.h"
/**
 * binary_to_uint - converts a binary number
 * @b: strign of numbers in binary
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	for (; *b; b++)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num = num << 1;
		else
			return (0);
	}
	return (num);
}

#include "main.h"
/**
 * _pow_recursion - calculates the power of a number
 * @x: base number
 * @y: exponent
 *
 * Return: 1 if y is 1, -1 if y is less than 0, number raised to its exponent
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1) * x); /*change y, output condition is met*/
}

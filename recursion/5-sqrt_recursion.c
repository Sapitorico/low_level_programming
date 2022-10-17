#include "main.h"
int _sqrt(int x, int y);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: square root result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
/**
 * _sqrt - calculates the square root of a number and returns it
 * @n: number
 * @i: square root
 *
 * Return: i * i is n (root), i * i > number (-1), until condition is met
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));	/*changes value until the output condition is met*/
}

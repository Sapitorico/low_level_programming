#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to be factored
 *
 * Return: 1 if n is 1, n! greater than 0, -1 if 0
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));	/*not return until it knows that it is n-1*/
	else
		return (-1);
}

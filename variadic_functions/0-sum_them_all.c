#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: parameters
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list;	/*I define a new list of argumentemtnos*/

	va_start(list, n);	/*I initialize my list of arguments*/
	if (n == 0)
		return (0);
	for (; i < n; i++)
		sum += va_arg(list, int);	/*I get the value of the sum of the arguments*/
	va_end(list);	/*I get the value of the sum of the arguments*/
	return (sum);
}

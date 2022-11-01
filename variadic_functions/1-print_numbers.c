#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num = 0;
	va_list args;

	va_start(args, n);
	if (!separator)	/*If separator is NULL, don’t print it*/
		separator = "";
	for (; i < n; i++)
	{
		num = va_arg(args, int);
		if (i == n - 1)
			printf("%d", num);
		else
			printf("%i%s", num, separator);
	}
	printf("\n");
	va_end(args);
}

#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *ptr;
	va_list args;

	va_start(args, n);
	if (!separator)	/*If separator is NULL, don’t print it*/
		separator = "";
	for (; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (!ptr)	/*If one of the string is NULL, print (nil) instead*/
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

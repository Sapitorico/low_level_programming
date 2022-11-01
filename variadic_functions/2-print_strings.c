#include "variadic_functions.h"
/**
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *ptr;
	va_list args;

	va_start(args, n);
	for (; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr == 0)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

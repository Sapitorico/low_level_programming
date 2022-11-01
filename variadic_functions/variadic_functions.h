#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

/*prototypes tas 3*/
void print_all(const char * const format, ...);

typedef struct formats
{
	char c;
	int (*f)(va_list args);
} format_t;

int print_char(va_list agrs);

int print_int(va_list args);

int print_float(va_list args);

int print_str(va_list args);

#endif /*variadic_functions.h*/

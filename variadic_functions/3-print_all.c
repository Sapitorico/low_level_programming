#include "variadic_functions.h"
/**
 * print_char - function that prints a character
 * @args: argument received
 *
 * Return: the output of the format
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (printf("%c", c));
}
/**
 * print_int - function that prints a integer
 * @args: argument received
 *
 * Return: the output of the format
 */
int print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	return (printf("%d", i));
}
/**
 * print_float - function that prints a float
 * @args: argument received
 *
 * Return: the output of the format
 */
int print_float(va_list args)
{
	float f;

	f = va_arg(args, double);
	return (printf("%f", f));
}
/**
 * print_str - function that prints a string
 * @args: argument received
 *
 * Return: the output of the format
 */
int print_str(va_list args)
{
	char *str = NULL;

	str = va_arg(args, char *);
	if (!str)
		str = "(nil)";
	return (printf("%s", str));
}
/**
 * print_all - function that prints formats
 * @format: formatos recibidos como parámetros
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep1 = "";
	char *sep2 = ", ";
	format_t form[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(args, format);
	for (; format && format[i]; i++)
	{
		j = 0;
		for (; form[j].c ; j++)
		{
			if (format[i] == form[j].c)
			{
				printf("%s", sep1);
				form[j].f(args);
				sep1 = sep2;
			}
		}
	}
	printf("\n");
	va_end(args);
}

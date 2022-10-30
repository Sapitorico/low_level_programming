#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to the string name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(f)(name);	/*I invoke the function and pass the parameters*/
}

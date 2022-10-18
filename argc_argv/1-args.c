#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: success
 */
int main(int argc, char *argv[])
{
	for (; argv[argc]; argc++)	/*counts the list of arguments*/
		;
	argc--;	/*subtract 1 to print the corresponding index*/
	printf("%d\n", argc);	/*prints the argument number*/
	exit(EXIT_SUCCESS);
}

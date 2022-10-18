#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument list
 *
 * Return: exit success
 */
int main(int argc, char **argv)
{
	for (argc = 0; argv[argc]; argc++)
		printf("%s\n", argv[argc]);	/*prints the given arguments*/
	exit(EXIT_SUCCESS);
}

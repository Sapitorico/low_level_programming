#include "main.h"
/**
 * main - prints the name of the function
 * @argc: is the count of the arguments
 * @argv: array to the argument list
 *
 * Return: exit 0 indicating success
 */
int main(int argc, char **argv)
{
	if (argc)	/*if its content exists*/
		printf("%s\n", *argv);	/*argv is a pointer to its first element*/
	exit(EXIT_SUCCESS);
}

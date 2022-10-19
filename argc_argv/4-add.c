#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 1 are not digits, success
 */
int main(int argc, char **argv)
{
	int result = 0;

	for (argc = 1; argv[argc]; argc++)
	{
		if (!atoi(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}

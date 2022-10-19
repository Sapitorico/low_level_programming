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
	int i;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}

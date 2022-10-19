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
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				result += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}

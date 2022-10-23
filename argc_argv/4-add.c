#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 1 are not digits, success
 */
int main(int argc, char **argv)	/*argv is a bidimensional array*/
{
	int result = 0;
	int i = 0, j = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]))	/*if the two arguments are not a digit*//*checks if all values are integers*/
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		result += atoi(argv[i]);	/*atoi() - dereference it, convert string to its ASCII number value*/
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: argument resived
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

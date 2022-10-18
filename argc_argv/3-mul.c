#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argumetn list
 *
 * Return: 1 not receive two arguments, or success
 */
int main(int argc, char **argv)
{
	int number, number1, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	number = atoi(argv[1]);
	number1 = atoi(argv[2]);
	result = number * number1;
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}

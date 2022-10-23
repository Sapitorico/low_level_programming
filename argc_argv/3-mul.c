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

	if (argc != 3)	/*if argc counts more than 2 arguments print error*/
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	number = atoi(argv[1]);		/*get values from the first argument */
	number1 = atoi(argv[2]);	/* get values from the second argument*/
	result = number * number1;
	printf("%d\n", result);	/*print result*/
	exit(EXIT_SUCCESS);
}

#include "3-calc.h"
/**
 * main - main operating function
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: result of the operation
 */
int main(int argc, char **argv)
{
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (*argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

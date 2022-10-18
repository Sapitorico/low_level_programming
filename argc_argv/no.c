#include "main.h"
/**
 */
int main(int argc, char **argv)
{
	int result = 1, num;
	int i = 1;
	char *p;

	for (; i < argc; i++)
	{
		num = strtol(argv[i], &p, 10);
		if (p == argv[i])
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		result = result * num;
	}
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}

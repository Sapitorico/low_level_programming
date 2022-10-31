#include "3-calc.h"
/**
 */
int main(int argc, char **argv)
{
	int (*f)(int a, int b);

	if (argc != 4)
		return (0);
	f = get_op_func(argv[2]);
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

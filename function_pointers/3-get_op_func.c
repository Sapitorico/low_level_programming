#include "3-calc.h"
/**
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{NULL, NULL}
	};
	int i = 0;

	while (s && ops[i].op)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

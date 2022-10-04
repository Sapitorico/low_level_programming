#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: is a integer number resived
 * Return: less than 0 absolute value,greater than 0 the number, otherwise 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;	/*returns a positive value if a negative value is received*/
		return (i);
	}
	else if (i > 0)
		return (i);
	return (0);
}

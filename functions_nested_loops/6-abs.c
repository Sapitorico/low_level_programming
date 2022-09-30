#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: is a integer number resived
 * Return: 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;
		return (i);
	}
	else if (i > 0)
		return (1);
	return (0);

}

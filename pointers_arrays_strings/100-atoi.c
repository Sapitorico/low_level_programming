#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pinter to the string
 *
 * Return: returns the conversion
 */
int _atoi(char *s)
{
	int tr = 0, i = 0, sign = 1;

	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}
	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		if (tr > INT_MAX / 10 || (tr == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		tr = 10 * tr + (s[i++] - '0');
	}
	return (tr * sign);
}

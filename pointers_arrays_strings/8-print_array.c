#include "main.h"
int _len(int *s);
void print_array(int *a, int n)
{
	int len = _len(a);

	for (n = 0; n <= len; n++)
	{
		if (n < len)
		{	
			printf("%i, ", a[n]);
		}
		else
			printf("%i", a[n]);
	}
	printf("\n");
}
int _len(int *s)
{
	int i;

	for (; s[i] != '\0';)
	{
		s++;
		i++;
	}
	return (i);
}

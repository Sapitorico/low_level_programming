#include "main.h"
int *_memseti(int *s, int b, unsigned int n);
/**
 */
int *array_range(int min, int max)
{
	int *arri = NULL;

	if (min > max)
		return (arri);
	arri = malloc((max - min + 1) * sizeof(int));
	if (!arri)
		return (arri);
	arri = _memseti(arri, min, (max - min + 1));
	return (arri);
}
int *_memseti(int *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		b++;
	}
	return (s);
}

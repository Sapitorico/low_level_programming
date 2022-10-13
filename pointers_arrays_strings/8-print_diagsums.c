#include "main.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: pointer to the two-dimensional diagonal
 * @size: diagonal size
 */
void print_diagsums(int *a, int size)
{
	int main = 0;
	int second = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		main += a[(i * size) + i];
		second += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", main, second);
}

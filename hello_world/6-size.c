#include <stdio.h>

/**
 * main - print bytes variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;
	int inter;
	long int long_inter;
	long long int inter_64;
	float simple_decimal;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of an int: %zu byte(s)\n", sizeof(inter));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_inter));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(inter_64));
	printf("Size of a float %zu byte(s)\n", sizeof(simple_decimal));
	return (0);
}

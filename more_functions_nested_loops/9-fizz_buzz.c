#include "main.h"
/**
 * main - prints the numbers from 1 to n
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\t");
		}
		else
			printf("%d\n", i);
	}
	printf("\n");
	return (0);
}

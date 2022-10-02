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
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Buzz ");
		}
		else 
			printf("%i ", i);
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
